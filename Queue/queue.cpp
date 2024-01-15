#include<iostream>
using namespace std;
class Queue{
	int *arr;
	int f;
	int r;
	int cs;
	int ts;
public:
	Queue(int s){
		arr=new int[s];
		cs=0;
		ts=s;
		f=0;
		r=-1;//ts-1


	}


	// push
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


	// pop
	void pop(){
		if(cs>0){
			f=(f+1)%ts;
			
			cs--;
		}
		else{
			cout<<"underflow"<<endl;
		}
	}



	// front
	int front(){
		return arr[f];
	}


	// empty
	bool empty(){
		return cs==0;
	}


	// size
	int size(){
		return cs;
	}
};
;
int main(){
	Queue q(5);

	q.push(50);
	q.push(40);
	q.push(20);
	q.push(5);
	q.push(12);
	q.pop();
	q.push(45);

	// q.push(8);

	while(!q.empty()){
		cout<<q.front()<<" ";
	q.pop();

	}

	cout<<endl;
	








	return 0;
}