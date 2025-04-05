#include<iostream>
#include <queue>
using namespace std;

int main(){
	
	queue<int> s;
	s.push(10);
	s.push(30);
	s.push(50);
	s.push(70);
	s.push(80);

	s.pop();
	// cout<<s.top()<<endl;
	while(!s.empty()){
		cout<<s.front()<<" ";
		s.pop();
	}
	




	return 0;
}
	
