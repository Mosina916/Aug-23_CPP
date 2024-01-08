#include<iostream>
#include<stack>
using namespace std;
int main(){
	// stack s;
	// stack<datatype> name;
	stack<char>s;

	s.push(65);
	s.push(67);
	s.push(68);
	s.push(89);
	s.push(90);
	s.pop();

	while(!s.empty()){
		cout<<s.top()<<" ";
	s.pop();
	

	}
	


	
	return 0;
}