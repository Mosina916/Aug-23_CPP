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
// 4 2 3 5 -->null
// 4 2 3 5-->null



void deleteattail(node*head,node*tail){
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
		// multiple nodes
		node*temp=head;

		while(temp->next!=tail){
			temp=temp->next;

		}
		delete tail;
		temp->next=NULL;
		tail=temp;
		
	}

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

void insertatanypostion(node*head,node*tail,int pos,int d){
	if(pos==0){
		insertatfront(head,tail,d);
	}
	else if(pos>=lenrec(head)){
		insertattail(head,tail,d);
	}
	else{
		node*temp=head;
		for (int jump = 1; jump <=pos-1;jump++)
		{
			temp=temp->next;
		}

		node*n=new node(d);
		n->next=temp->next;
		temp->next=n;
	}
}

void deleteanypostion(node*head,node*tail,int pos){

	if(pos==0){
		deleteathead(head,tail);
	}
	else if(pos>=lenrec(head)-1){
		deleteattail(head,tail);
	}
	else{
		node*temp=head;
		for (int jump = 1; jump <=pos-1;jump++)
		{
			temp=temp->next;
		}

		node*q=temp->next;
		temp->next=q->next;

		delete q;
		q=NULL;

	}
	
}

int main(){
	node*head=NULL;
	node*tail=NULL;

	int n;
	cin>>n;//5
	for (int i = 0; i <n; ++i)
	{
		int da;
		cin>>da;//3 5 2 6 1
		insertattail(head,tail,da);
	}

		printll(head);

		insertatanypostion(head,tail,3,30);

		// 3 5 2 30 6 1

		deleteanypostion(head,tail,4);
		// 3 5 2 30  1
		printll(head);


	// insertattail(head,tail,5);
	// insertattail(head,tail,6);
	// insertattail(head,tail,7);
	// insertatfront(head,tail,13); // 13 5 6 

	// deleteattail(head,tail);

	// printll(head);

	// cout<<"length of ll "<<lenrec(head)<<endl;
	// cout<<"length of ll "<<lenitr(head)<<endl;
	// int key;
	// cin>>key;
	// if(searchinllrec(head,key)){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	// }

	// printll(head);
	// insertattail(head,tail,);
	

	return 0;
}

	