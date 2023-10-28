#include<iostream>
using namespace std;
int main(){

	// int a=10;
	// int *ptr=&a;
	// double a=10.75;
	// double *ptr=&a;
	char a='S';
	char *ptr=&a;


	cout<<(void *)ptr<<endl;
	cout<<(void *)(ptr+1)<<endl;
	cout<<ptr+2<<endl;
	cout<<ptr+3<<endl;
	cout<<ptr+4<<endl;





	return 0;
}