#include<iostream>
#include<queue>
using namespace std;
// 3 4 1 5 6 2



void printheap(priority_queue<int,vector<int>,greater<int> > h){
	while(!h.empty()){
		cout<<h.top()<<" ";
	h.pop();
}
}

int main(){
	
	priority_queue<int,vector<int>,greater<int> > h;

	int c=1;
	int k;
	cin>>k;//3

	int data;
	while(1){
		cin>>data;//3 1 6 4 -1 2 5

	if(c<=k){
		h.push(data);
		c++;//4
	}
	else{
		if(data==-1){
			printheap(h);
		}
		else if(data>h.top()){
			h.pop();
			h.push(data);
		}
	}

	}
	

	




	
	
	return 0;

}