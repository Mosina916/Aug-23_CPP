#include<iostream>
#include<queue>
using namespace std;
// 3 4 1 5 6 2

// find kth largest in arr

int main(){
	priority_queue<int> h;//max heap
	// priority_queue<int,vector<int>,greater<int> > h;

	// push
	h.push(1);
	h.push(2);
	h.push(3);
	h.push(17);
	h.push(19);
	h.push(36);
	h.push(7);
	h.push(25);
	h.push(100);
	int k;
	cin>>k;//3


	// pop
	for(int i=1;i<=k-1;i++){

	h.pop();
}
	cout<<h.top()<<endl;

	




	
	
	return 0;

}