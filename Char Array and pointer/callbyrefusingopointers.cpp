#include<iostream>
using namespace std;
void update(int*ptr){

	*ptr=*ptr+20;
	cout<<*ptr<<endl;


}
int main(){
	int z=34;
	update(&z);c
	cout<<z<<endl;


	// rules
	int *xptr=NULL;
	// xptr++; valid//




	int arr[]={3,2,4,1,5};
	// xptr=arr;valid


	// arr=xptr;//not valid
	// arr++;not valid


	return 0;
}