#include<iostream>
#include<vector>
using namespace std;
class stack{
	vector<int> v;
	public:
	
	// push

	void push(int d){
		v.push_back(d);

	}
	// pop
	void pop(){
		v.pop_back();
	}


	// top
	int top(){
		return v[v.size()-1];
	}

	// size
	int size(){
		return v.size();
	}

	// empty
	bool empty(){
		return v.size()==0;
	}
};
int main(){
	stack s;
	s.push(7);
	s.push(47);
	s.push(73);
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