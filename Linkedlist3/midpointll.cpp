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


int lenrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}
	// rec case
	return 1+lenrec(head->next);

}


void printll(node*head){

	while(head!=NULL){
		cout<<head->d<<"-->";//13-->5-->6-->7-->
	head=head->next;

	}
	cout<<endl;

}

node* midpoint(node*head){
	node*s=head;
	// node*f=head;
	node*f=head->next;
	while(f!=NULL and f->next!=NULL){
		s=s->next;
		f=f->next->next;
		
	}
	return s;
}

void bubblesort(node*head){
	 for(int step=1;step<=lenrec(head)-1;step++){
	 	for(node*temp=head;temp->next!=NULL;temp=temp->next){
	 		if(temp->d>temp->next->d){
	 			swap(temp->d,temp->next->d);
	 		
	 		}
	 	}
	 }

}

node* kthnodefronend(node*head,int k){
	node*temp=head;
	node*ans=head;
	for (int i = 1; i <=k-1; ++i)
	{
		temp=temp->next;
	}


	while(temp->next!=NULL){
		temp=temp->next;
		ans=ans->next;
	}

	return ans;
}

node* mergetwosortedll(node*head1,node*head2){
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}

	node*newhead=NULL;
	if(head1->d<head2->d){
		newhead=head1;
		newhead->next=mergetwosortedll(head1->next,head2);
		// return newhead;


	}
	else{
		newhead=head2;
		newhead->next=mergetwosortedll(head1,head2->next);
		// return newhead;
	}

	return newhead;

}

int main(){
	node*head1=NULL;
	node*tail1=NULL;

	int n;
	cin>>n;//6
	for (int i = 0; i <n; ++i)
	{
		int da;
		cin>>da;//2 5 7 9 11 12
		insertattail(head1,tail1,da);
	}

	node*head2=NULL;
	node*tail2=NULL;

	int m;
	cin>>m;//5
	for (int i = 0; i <m; ++i)
	{
		int da;
		cin>>da;//1 3 4 11 13
		insertattail(head2,tail2,da);
	}

	node*nh=mergetwosortedll(head1,head2);
	printll(nh);
	// node*h=midpoint(head);

	// cout<<h->d<<endl;


	// bubblesort(head);

	// printll(head);
	// int k;
	// cin>>k;

	// node*h=kthnodefronend(head,k);

	// cout<<k<<"th node from end is "<<h->d<<endl;

	
	

	return 0;
}

	