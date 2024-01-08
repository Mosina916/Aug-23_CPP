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


bool checkcyclepresentornot(node*head){
	node*s=head;
	node*fast=head;
	while(fast!=NULL and fast->next!=NULL){
		s=s->next;
		fast=fast->next->next;
		if(s==fast){
			return true;
		}
	}
	return false;
}

// create cycle

void createcycle(node*head,int pos){
	node*temp=head;
	node*t=head;
	while(temp->next!=NULL){
		temp=temp->next;

	}
	for (int jump = 1; jump <=pos-1; jump++)
	{
		t=t->next;
	}

	temp->next=t;//
}

// floyd cycle detection

// 1 2 3 4 5 6 7 8  8 ko link karo 3 k saath
void removecycle(node*head){
	// to detect cycle 
	bool kyacyclehai=false;
	node*s=head;
	node*fast=head;
	while(fast!=NULL and fast->next!=NULL){
		s=s->next;
		fast=fast->next->next;
		if(s==fast){
			kyacyclehai=true;
			break;
		}
	}



	if(kyacyclehai==true){
		// break karne ka kaam
		s=head;
		// move s/f back to head
		// move both s and f by 1x
		while(s->next!=fast->next){
		s=s->next;
		fast=fast->next;
	}

	fast->next=NULL;


		// they will meet at a point 




	}



	// if cycle is present then temove it 
}


node*reverseall(node*head){
	node*curr=head;
	node*prev=NULL;
	while(curr!=NULL){
		node*ne=curr->next;
	curr->next=prev;
	prev=curr;
	curr=ne;

	}

	return prev;
	

}

node* kreverse(node*head,int k){
	// 3 1 4-->null 6 2 0 15 13 12
	if(head==NULL){
		return head;
	}

	node*temp=head;

	for (int i = 1; i <=k-1;i++)
	{
		temp=temp->next;
	}
	node*x=temp->next;//6
	temp->next=NULL;

	node*a=reverseall(head);//-->4 1 3
	node*b=kreverse(x,k);
	node*m=a;
	for (int i = 1; i <=k-1; i++)
	{
		m=m->next;
	}

	m->next=b;

	return a;


}	


int main(){
	node*head1=NULL;
	node*tail1=NULL;

	int n;
	cin>>n;//6
	for (int i = 0; i <n; ++i)
	{
		int da;
		cin>>da;//1 2 3 4 5 6 7 8 9
		insertattail(head1,tail1,da);
	}
	int k;
	cin>>k;

	node*d=kreverse(head1,k);
	printll(d);

	// createcycle(head1,2);

	// removecycle(head1);

	// printll(head1);//1 2 3 4 5 6 7 

	// if(checkcyclepresentornot(head1)==true){
	// 	cout<<"cycle is present"<<endl;
	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;

	// }
	
	return 0;
}

	