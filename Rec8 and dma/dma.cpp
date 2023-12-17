#include<iostream>
#include<cmath>
using namespace std;
int main(){
	// sma
	// int a;
	// a=320;
	// dma 

	int *ptr=new int;
	*ptr=320;
	cout<<*ptr<<endl;

	// delete pointername;
	delete ptr;
	ptr=NULL;
	


		return 0;

}
