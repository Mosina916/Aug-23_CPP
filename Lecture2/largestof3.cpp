#include<iostream>
using namespace std;
int main(){

	// in assumed all the 3 no are differnt
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b && a>=c){
		cout<<a<<" is largest"<<endl;
	}
	else if(b>=a && b>=c){
		cout<<b<<" is largest"<<endl;

	}
	else{
		cout<<c<<" is largest"<<endl;
	}



	return 0;
}