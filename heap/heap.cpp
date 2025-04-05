#include<iostream>
#include<vector>
using namespace std;
class heap{
	vector<int> v;
	public:
	

	heap(){
		v.push_back(-1);

	}
	void insert(int d){
		v.push_back(d);
		int c=v.size()-1;

		while(c!=1){
		int p=c/2;
		if(v[p]>v[c]){
			swap(v[p],v[c]);
		}
		c=p;
	}
	}

	void heapify(int index){//5
		int minindex=index;//5
		int lci=index*2;//10
		int rci=lci+1;//11

		if(lci<v.size() and v[minindex]>v[lci]){//19>1
			minindex=lci;

		}
		if(rci<v.size() and v[minindex]>v[rci]){//1>3
			minindex=rci;

		}

		if(minindex!=index){//base case
		swap(v[minindex],v[index]);
		heapify(minindex);
	}
	}

	void deleteinheap(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);

	}

	int top(){
		return v[1];
	}

	bool empty(){
		return v.size()==1;
	}

	int size(){
		return v.size()-1;
	}

};
int main(){
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
cout<<endl;

// heap sort

	return 0;
}