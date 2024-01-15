#include<iostream>
#include<queue>
using namespace std;
class Stack{
	queue<int> q1;
	queue<int> q2;

public:

	void push(int d){
		if(q1.empty() and q2.empty()){
			q1.push(d);
		}
		else if(!q1.empty() and q2.empty()){
			q1.push(d);
		}
		else{
			q2.push(d);
		}

	}

	void pop(){
		if(q1.empty() and q2.empty()){
			cout<<"underflow"<<endl;
		}
		else if(!q1.empty() and q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
			q1.pop();

			}
			q1.pop();
			
		}
		else{
			while(q2.size()>1){
				q1.push(q2.front());
			q2.pop();

			}
			q2.pop();

		}


	}

	int top(){
		if(q1.empty() and q2.empty()){
			return -1;
		}
		else if(!q1.empty() and q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
			q1.pop();

			}
			int d=q1.front();
			q2.push(d);
			q1.pop();

			return d;
			
		}
		else{
			while(q2.size()>1){
				q1.push(q2.front());
			q2.pop();

			}
			int d=q2.front();
			q1.push(d);
			q2.pop();

			return d;
			

		}

	}

	bool empty(){

		return q1.size()+q2.size()==0;
	}


	int size(){
		return q1.size()+q2.size();


	}

};
int main(){
	Stack s;
	s.push(30);
	s.push(14);
	s.push(42);
	s.push(4);
	s.pop();
	s.push(45);
	s.pop();

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}

	cout<<endl;

	


	return 0;
}