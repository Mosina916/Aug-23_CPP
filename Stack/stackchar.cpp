#include<iostream>
#include<vector>
using namespace std;
template<typename U> 
class stack{
	vector<U> v;
	public:
	
	// push

	void push(U d){
		v.push_back(d);

	}
	// pop
	void pop(){
		v.pop_back();
	}


	// top
	U top(){
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