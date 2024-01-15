#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<int> q;

	q.push(50);
	q.push(40);
	q.push(20);
	q.push(5);
	q.push(12);
	q.pop();
	q.push(45);

	// q.push(8);

	while(!q.empty()){
		cout<<q.front()<<" ";
	q.pop();

	}

	cout<<endl;
	








	return 0;
}