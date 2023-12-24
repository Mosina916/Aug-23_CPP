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

int main(){
	node x(5);
	node y(6);
	x.next=&y;//link


	cout<<x.d<<endl;
	cout<<x.next->d<<endl;
	cout<<(*x.next).d<<endl;

	// cout<<y.d<<endl;


	

	return 0;
}

	