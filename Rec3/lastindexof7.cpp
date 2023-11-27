#include<iostream>
using namespace std;
// int lastindex(int arr[],int n){

// 	// base case
// 	if(n==0){
// 		return -1;
// 	}


// 	// rec case
// 	if(arr[n-1]==7){
// 		return n-1;

// 	}
// 	return lastindex(arr,n-1);
// }

int lastindex(int arr[],int n,int i){

	// base case
	if(i==-1){
		return -30;
	}


	// rec case
	if(arr[i]==7){
		return i;

	}
	return lastindex(arr,n,i-1);
}	
int main(){
	int arr[]={3,4,7,5,7,2,3};
	int n=sizeof(arr)/sizeof(int);

	int x=lastindex(arr,n,n-1);

	cout<<x<<endl;
	


	return 0;
}