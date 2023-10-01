#include<iostream>
using namespace std;
int a=67;//global variable
int main(){
	// local variable
	// int a=10;
	int b=34;
	int c=89;
	if(a<=20){
		// int a=23;
		cout<<a<<endl;
		cout<<::a<<endl;
		cout<<b<<endl;

	}

	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
		


	return 0;
}