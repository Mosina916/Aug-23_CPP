#include <iostream>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};

void insertathead(node*&head,node*&tail,int d){
	// agar pehla nodeinsert ho raha heda tail donu chage hoge

	if(head==NULL and tail==NULL){
		node*ptr=new node(d);
		head=ptr;
		tail=ptr;

	}
	else{

	// node x(d);
	// 
	node*ptr=new node(d);
	ptr->next=head;
	head=ptr;
}

}


void insertattail(node*&head,node*&tail,int d){
	// agar pehla nodeinsert ho raha heda tail donu chage hoge

	if(head==NULL and tail==NULL){
		node*ptr=new node(d);
		head=ptr;
		tail=ptr;

	}
	else{
		node*ptr=new node(d);
		tail->next=ptr;
		tail=ptr;
	
}

}

void printll(node*head){
	node*temp=head;//700
	while(temp!=NULL){
	cout<<temp->data<<"-->";
	temp=temp->next;
}
}

int lengthllrec(node*head){
	if(head==NULL){
		return 0;
	}


	return 1+lengthllrec(head->next);
}

int lengthll(node*head){
	node*temp=head;//700
	int c=0;
	while(temp!=NULL){
		c++;
	temp=temp->next;
}

return c;
}

//   	  head
//   temp=null
// // 1-->7-->8-->5-->4-->
void deleteathead(node*&head,node*&tail){
	// jab khali hai ll
	if(head==NULL and tail==NULL){
		return;
	}
	// single node
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	// multiple nodes
	else{

	node*temp=head;
	head=head->next;
	delete temp;
	temp=NULL;
}

}


void deleteattail(node*&head,node*&tail){
	// jab khali hai ll
	if(head==NULL and tail==NULL){
		return;
	}
	// single node
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	// multiple nodes
	else{
		node* temp=head;
		while(temp->next!=tail){
		temp=temp->next;
	}
	delete tail;
	tail=temp;
	tail->next=NULL;



}

}

void insertatanypositioninbtween(node*&head,node*&tail,int pos,int d){
	if(pos==0){
		insertathead(head,tail,d);
	}
	else if(pos>=lengthll(head)){
		insertattail(head,tail,d);
	}
	else{
		node*temp=head;

		for(int jump=1;jump<=pos-1;jump++){
		temp=temp->next;
	}
		node*ptr=new node(d);
		ptr->next=temp->next;
		temp->next=ptr;

	}


}


bool search(node*head,int key){
	if(head==NULL){
		return false;
	}

	// rec case
	if(head->data==key){
		return true;
	}
	return search(head->next,key);
	
}




void bubblesort(node*head){
	//5 4 3 2 1
		for(int step=1; step<=lengthll(head)-1;step++){//4
	for (node*temp=head; temp->next!=NULL;temp=temp->next)
	{
		if(temp->data>temp->next->data){
			swap(temp->data,temp->next->data);
		}
	}
	// 1 2 3 4 5
}

}






// node* midpoint(node*head){
// 	node*p1=head;
// 	node*p2=head;

// 	while(p1!=NULL and p1->next!=NULL){
// 	p1=p1->next->next;
// 	p2=p2->next;
// }

// return p2;

// }

// even k case pehla wala 
node* midpoint(node*head){
	node*p1=head->next;
	node*p2=head;

	while(p1!=NULL and p1->next!=NULL){
	p1=p1->next->next;
	p2=p2->next;
}

return p2;

}


node* kthpointfromend(node*head,int k){
	node*x=head;
	node*y=head;
	for (int i = 1; i <=k-1; ++i)
	{
		y=y->next;
	}


	while(y->next!=NULL){
	x=x->next;
	y=y->next;
}
return x;
}

node* mergetwosll(node*head1,node*head2){
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	// 2 4 6 
	// 1 2 4 7 9 
	node*newhead=NULL;
	if(head1->data<head2->data){
		newhead=head1;//
		newhead->next=mergetwosll(head1->next,head2);
		// return newhead;

	}
	else{
		newhead=head2;//
		newhead->next=mergetwosll(head1,head2->next);
		// return newhead;
	}
	return newhead;


}	
	// a     		 temp
// 100	    500   		 250
// 5  3  1  7-->null     4   2  0
node* mergesort(node*head){//null
	if(head==NULL){
		return NULL;
	}

	if(head->next==NULL){
		return head;
	}


	node*a=midpoint(head);//500
	node*temp=a->next;
	a->next=NULL;
	node*p=mergesort(head);//1 3 5 7
	node*q=mergesort(temp);//0 2 4
	return mergetwosll(p,q);//0 1 2 3 4 5 7


}


node* reversell(node*head){

	node*current=head;
	node*prev=NULL;

	while(current!=NULL){
	node*justaage=current->next;
	current->next=prev;
	prev=current;
	current=justaage;
}
return prev;




}


node* kthreverse(node*head,int k){
	if(head==NULL){
		return NULL;
	}
	node*temp=head;
	for(int i=1;i<=k-1;i++){
		temp=temp->next;
	}
	node*a=temp->next;
	temp->next=NULL;
	node*p=reversell(head);//7 5 3 //p mai 7 ka address hoga
	node*q=kthreverse(a,k);//2 ka addess hoga

	node*l=p;
	for(int i=1;i<=k-1;i++){
		l=l->next;
	}
	l->next=q;
	return p;

}

bool iscycle(node*head){
	node*p1=head;
	node*p2=head;
	while(p2!=NULL and p2->next!=NULL){
	p1=p1->next;
	p2=p2->next->next;
	if(p1==p2){
		return true;
	}
}
return false;

}

void createcycle(node*head,int k){
		node*temp=head;
		while(temp->next!=NULL){
		temp=temp->next;

	}

	node*a=head;
	for(int i=1;i<=k-1;i++){
		a=a->next;
	}

	temp->next=a;



	}


void removecycle(node*head){
	node*p1=head;
	node*p2=head;
	bool kyacyclehai=false;
	while(p2!=NULL and p2->next!=NULL){
	p1=p1->next;
	p2=p2->next->next;
	if(p1==p2){
		kyacyclehai=true;
		break;
	}
}

	if(kyacyclehai==true){
		// remove
		p1=head;
		while(p1->next!=p2->next){
		p1=p1->next;
		p2=p2->next;
	}
	p2->next=NULL;

	}

}

node* oddeven(node*head,node*tail){//
	if(head==NULL){
		return NULL;

	}
	node*eh=NULL;
	node*et=NULL;

	node*oh=NULL;
	node*ot=NULL;

	node*temp=head;//3
	while(temp!=NULL){
	if(temp->data%2==0){
		insertattail(eh,et,temp->data);

	}
	else{
		insertattail(oh,ot,temp->data);

	}
	temp=temp->next;
} 
ot->next=eh;

return oh;


}

int main(){
	node*head=NULL;
	node*tail=NULL;

	
	int n,d;
	cin>>n;//9
	for (int i = 1; i <=n; ++i)
	{
		cin>>d;//
		insertattail(head,tail,d);
	}

	node*x=oddeven(head,tail);
	printll(x);

	
	return 0;

}