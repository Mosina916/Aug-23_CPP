#include<iostream> 
using namespace std;
class node{
public:

	int d;
	node*next;
	node(int data){
		d=data;
		next=NULL;
	}
};


void insertattail(node*&he,node*&ta,int d){
	node*n=new node(d);
	if(he==NULL){
		he=n;
		ta=n;

	}
	else{
		ta->next=n;
		ta=n;
	}

}

void insertatfront(node*&head,node*&tail,int d){
	node*n=new node(d);
	if(head==NULL){
		head=n;
		tail=n;

	}
	else{
		n->next=head;
		head=n;

	}
	

}

void deleteathead(node*&head,node*&tail){
	if(head==NULL){

		// ll is empty
		return;
	}
	else if(head->next==NULL){
		// single node
		delete head;
		head=NULL;
		tail=NULL;

	}
	else{
		node*temp=head->next;//
		delete head;
		head=temp;
	}
}

bool searchinlliter(node*head,int key){

	while(head!=NULL){
			if(head->d==key){
				return true;

	}
	head=head->next;

	}

	return false;


}

bool searchinllrec(node*head,int key){

	// base case
	if(head==NULL){
		return false;
	}


	// /rec case
	if(head->d==key){
		return true;
	}

	return searchinllrec(head->next,key);





}

int lenrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}
	// rec case
	return 1+lenrec(head->next);

}

int lenitr(node*head){
	int co=0;

	while(head!=NULL){
		co++;
	head=head->next;

	}


	return co;



}

void printll(node*head){

	while(head!=NULL){
		cout<<head->d<<"-->";//13-->5-->6-->7-->
	head=head->next;

	}
	cout<<endl;

}

int main(){
	node*head=NULL;
	node*tail=NULL;
	insertattail(head,tail,5);
	insertattail(head,tail,6);
	insertattail(head,tail,7);
	insertatfront(head,tail,13);

	// printll(head);

	// cout<<"length of ll "<<lenrec(head)<<endl;
	// cout<<"length of ll "<<lenitr(head)<<endl;
	int key;
	cin>>key;
	if(searchinllrec(head,key)){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;

	}

	// printll(head);
	// insertattail(head,tail,);
	

	return 0;
}

	