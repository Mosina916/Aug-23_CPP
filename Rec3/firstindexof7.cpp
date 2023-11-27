#include<iostream>
using namespace std;
int fistindex(int arr[],int n,int i){
	// base case
	if(i==n){
		return -30;
	}


	// rec case
	if(arr[i]==7){
		return i;

	}
	return fistindex(arr,n,i+1);
}
int main(){
	int arr[]={3,4,7,5,7,2,3};
	int n=sizeof(arr)/sizeof(int);
	// checkis7present(arr,n);
	int x=fistindex(arr,n,0);
	if(x<0){
		cout<<"7 is not present"<<endl;
	}
	else{
		cout<<"7 is present at index "<<x<<endl;

	}


	return 0;
}