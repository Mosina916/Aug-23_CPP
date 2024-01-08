#include<iostream>
#include<vector>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next= NULL;
	}
};
class stack{
	node*head;
	int len;
	
	public:
		stack(){
			head=NULL;
			len=0;

		}

	
	// push

	void push(int d){
		node*n=new node(d);
		n->next=head;
		head=n;
		len++;
		
	}
	// pop
	void popp(){
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
		len--;
		
	}
	// top
	int top(){
		return head->data;

		
	}

	// size
	int size(){
		return len;
		
	}

	// empty
	bool empty(){
		return len==0;
		
	}
};
int main(){
	stack s;
	s.push(7);
	s.push(47);
	s.push(73);
	s.push(72);
	s.push(77);
	s.popp();

	while(!s.empty()){
		cout<<s.top()<<" ";
	s.popp();
	

	}
	


	// cout<<s.v[2]<<endl;


	
	return 0;
}