#include<iostream>
#include <stack>
using namespace std;

int main(){
	
	stack<int> s;
	s.push(10);
	s.push(30);
	s.push(50);
	s.push(70);
	s.push(80);

	s.pop();
	// cout<<s.top()<<endl;
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	




	return 0;
}
	


	return 0;
}