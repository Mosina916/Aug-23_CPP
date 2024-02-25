#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> l;
	l.push_back(5);
	l.push_back(6);
	l.push_back(3);
	l.push_back(8);
	l.push_back(9);

	for(int x:l){
		cout<<x<<"-->";

	}

	cout<<endl;


	

	return 0;
}