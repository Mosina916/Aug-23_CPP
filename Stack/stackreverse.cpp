#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int ele){
	if(s.empty()){
		s.push(ele);
		return;
	}

	int te=s.top();
	s.pop();
	insertatbottom(s,ele);
	s.push(te);

}
void reveseusingrec(stack<int>&s){
	if(s.empty()){
		return;
	}

	int ele=s.top();
	s.pop();
	reveseusingrec(s);
	insertatbottom(s,ele);
}
int main(){
	stack<int> s;
	s.push(2);
	s.push(12);
	s.push(21);
	s.push(26);
	s.push(86);

	reveseusingrec(s);
	while(!s.empty()){
		cout<<s.top()<<" ";
	s.pop();
	

	}




	return 0;
}
