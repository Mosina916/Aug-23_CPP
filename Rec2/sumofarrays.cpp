#include <iostream>
using namespace std;
int sumofarr1(int *arr,int n){
	//  base case
	if(n==0){
		return 0;
	}


	// rec case
	return arr[0]+sumofarr1(arr+1,n-1);
}
int sumofarr2(int *arr,int n){
	//  base case
	if(n==0){
		return 0;
	}


	// rec case
	return arr[n-1]+sumofarr2(arr,n-1);
}

int sumofarr3(int *arr,int n,int i){
	//  base case
	if(i==n){
		return 0;
	}


	// rec case
	return arr[i]+sumofarr3(arr,n,i+1);
}
int main(){
	int arr[]={2,4,1,3,1};
	int n=sizeof(arr)/sizeof(int);
	cout<<sumofarr1(arr,n)<<endl;
	cout<<sumofarr2(arr,n)<<endl;
	cout<<sumofarr3(arr,n,0)<<endl;



	return 0;
}