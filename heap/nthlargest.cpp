#include<iostream>
#include <queue>
using namespace std;
int main(){
	priority_queue<int,vector<int>,greater<int> > h;
	// 5 7 2 1 9 3 71 -4 -6 15 3 1 -1
	int n;
	cin>>n;//4
	int c=0;

	int data;
	cin>>data;//3
	while(data!=-1){
	

	if(c<=n-1){
	h.push(data);
	c++;//4
}
else{
	if(h.top()<data){
		h.pop();
		h.push(data);
	}
}
cin>>data;
}



	cout<<h.top()<<" ";//0 1

 
	

	return 0;
}