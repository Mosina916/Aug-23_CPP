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