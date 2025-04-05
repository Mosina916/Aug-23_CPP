#include<iostream>
#include <queue>
using namespace std;
void printhead(priority_queue<int,vector<int>,greater<int> > h){
	while(!h.empty()){
	cout<<h.top()<<" ";//0 1
	h.pop();
}

}
int main(){
	priority_queue<int,vector<int>,greater<int> > h;
	int n;
	cin>>n;//4
	int c=0;

	int data;
	while(1){
	cin>>data;//3
	if(data==-1){
		printhead(h);
	}
	else{

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
}
}



	return 0;
}