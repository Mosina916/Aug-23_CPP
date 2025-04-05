#include <iostream>
using namespace std;
class cqueue{
	int *arr;
	int f;
	int r;
	int cs;
	int ts;
public:
	cqueue(int s){
		arr=new int[s];
		cs=0;
		ts=s;
		f=0;
		r=-1;

	}


	void push(int d){
		if(cs<ts){
		r=(r+1)%ts;
		arr[r]=d;
		cs++;
	}
	else{
		cout<<"overflow"<<endl;
	}

	}


	void pop(){
		if(cs>0){
		f=(f+1)%ts;
		cs--;

	}
	else{
		cout<<"underflow"<<endl;

	}

	}


	int size(){
		return cs;
	}


	int front(){
		return arr[f];
	}

	bool empty(){
		return cs==0;
	}
};
int main(){
	cqueue q(5);
	q.push(45);
	q.push(5);
	q.push(9);
	q.push(4);
	q.push(3);

	q.pop();
	q.pop();

	// q.push(7);
	// q.push(8);

	while(!q.empty()){
	cout<<q.front()<<" ";
	q.pop();
}



	
	
	return 0;

}