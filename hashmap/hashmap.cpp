#include<iostream>
using namespace std;
class node{
public:
	string fname;
	string fcol;
	node* next;
	node(string fn,string fc){
		fname=fn;
		fcol=fc;
		next=NULL;

	}

};

class hashmap{
	node**arr;
	int ts;
	int cs;
public:
	hashmap(int size=7){
		arr=new node*[size];
		ts=size;
		cs=0;
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}



	}

	int hashfunction(string s){//"abc"
	int ans=0;
	int mult=1;

	for(int i=0;s[i]!='\0';i++){
		ans=ans+(s[i]%ts*mult%ts)%ts;
	mult=(mult%ts*29%ts)%ts;//29^2*29'

	}

	return ans%ts;

	}
	void rehashing(){
		node**oldarr=arr;
		int oldts=ts;
		arr=new node*[2*ts];
		ts=2*ts;
		cs=0;
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}

		// c=opy
		for (int i = 0; i <oldts; ++i)
		{
			node*temp=oldarr[i];
			while(temp!=NULL){
				insert(temp->fname,temp->fcol);
				temp=temp->next;
			}

		}
		delete[] oldarr;
		oldarr=NULL;

	}
	void insert(string fn,string fc){

		int index=hashfunction(fn);
		node*n=new node(fn,fc);
		n->next=arr[index];
		arr[index]=n;
		cs++;
		if((cs*1.0)/ts>0.5){
			rehashing();
		}

	}

	void printhashmap(){
		for(int i=0;i<ts;i++){
			cout<<i<<" : ";
			node*temp=arr[i];//200
			while(temp!=NULL){
				cout<<"( "<<temp->fname<<","<<temp->fcol<<"),";
				temp=temp->next;


			}
			

			cout<<endl;

		}

	}

};
int main(){
	hashmap h;
	h.insert("mango","yellow");
	h.insert("guava","green");
	h.insert("apple","red");
	h.insert("app","reed");

	h.printhashmap();







	return 0;
}