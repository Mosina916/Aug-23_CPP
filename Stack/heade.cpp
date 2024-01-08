#include "test.h"
int main(){
	stack<char> s;
	s.push('A');
	s.push('G');
	s.push('A');
	s.push(72);
	s.push(77);
	s.pop();

	while(!s.empty()){
		cout<<s.top()<<" ";
	s.pop();
	

	}
	


	// cout<<s.v[2]<<endl;


	
	return 0;
}