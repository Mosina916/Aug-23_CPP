#include<iostream>
#include<vector>
using namespace std;
class heap{
	vector<int> v;

public:
	heap(){
		v.push_back(-1);
	}

	// insert
	void insert(int d){
		v.push_back(d);

		int child=v.size()-1;
		while(child!=1){
			int parent=child/2;
		if(v[parent]>v[child]){
			swap(v[parent],v[child]);

		}

		child=parent;

		}
		
	}

	void heapify(int index){
		int minindex=index;
		int li=2*index;
		int ri=li+1;

		if(li<=v.size()-1 and v[li]<v[minindex]){
			minindex=li;

		}
		if(ri<=v.size()-1 and v[ri]<v[minindex]){
			minindex=ri;
			
		}

		if(minindex!=index){
			swap(v[minindex],v[index]);
			heapify(minindex);
		}

	}


	// delete

	void deleteinheap(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}


	// size

	int size(){
		return v.size()-1;
		}

	// top
		int top(){
			return v[1];
		}

	// empty
		bool empty(){
			return v.size()==1;
		}



};
int main(){
	// heap sort
	heap h;
	h.insert(1);
	h.insert(2);
	h.insert(3);
	h.insert(17);
	h.insert(19);
	h.insert(36);
	h.insert(7);
	h.insert(25);
	h.insert(100);


	h.insert(0);

	while(!h.empty()){
		cout<<h.top()<<" ";//0 1
	h.deleteinheap();

	}

	




	return 0;
}