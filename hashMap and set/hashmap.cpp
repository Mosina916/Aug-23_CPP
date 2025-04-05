#include<iostream>
using namespace std;
class node{
public:
	string fname;
	string fcol;
	node*next;
	node(string fn,string fc){
		fname=fn;
		fcol=fc;
		next=NULL;
	}
};

class hashmap{
	node**arr;
	int cs;
	int ts;
public:
	hashmap(){
		arr=new node*[7];
		cs=0;
		ts=7;

		for (int i = 0; i <7; ++i)
		{
			arr[i]=NULL;
		}


	}

	// string to int

	int hashfn(string fn){
		int ans=0;
		int mult=1;
		for (int i = 0; fn[i]!='\0'; ++i)
		{
			ans=(ans%ts+(fn[i]%ts*mult%ts)%ts)%ts;
			mult=(mult%ts*29%ts)%ts;
		}
		return ans;
	}

	void rehashing(){

		node**oldarr=arr;//500
		int oldts=ts;//7
		arr=new node*[2*ts];
		ts=2*ts;
		cs=0;
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
			
		}

		for(int i=0;i<oldts;i++){
			node*temp=oldarr[i];

			while(temp!=NULL){
			insert(temp->fname,temp->fcol);
			temp=temp->next;
		}



		}

		delete []oldarr;
		oldarr=NULL;


	}

	void insert(string fn,string fc){
		int index=hashfn(fn);//2
		node*n=new node(fn,fc);
		n->next=arr[index];
		arr[index]=n;
		cs++;//4
		if((cs*1.0/ts)>0.5){
			rehashing();
		}



	}


	void printhashmap(){
		for (int i = 0; i <ts; ++i)
		{
			cout<<i<<" : ";
			node*temp=arr[i];

			while(temp!=NULL){
			cout<<"("<<temp->fname<<","<<temp->fcol<<"),";
			temp=temp->next;
		}

			cout<<endl;
		}
	}

	bool search(string fn){
		int index=hashfn(fn);
		node*temp=arr[index];
		while(temp!=NULL){
		if(temp->fname==fn){
			return true;
		}
		temp=temp->next;
	}

	return false;

	}
};
int main(){
	hashmap h;
	// h["abc"]="red";

	// arr[3]=6;

	h.insert("abc","red");
	h.insert("pqr","blue");

	h.insert("bac","orange");
	h.insert("lmn","black");

	// h.insert("cab","black");

	h.printhashmap();

	if(h.search("ab")==true){
		cout<<"present"<<endl;

	}
	else{
		cout<<"not present"<<endl;

	}






	return 0;
}