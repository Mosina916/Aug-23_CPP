#include<iostream>
using namespace std;
bool isarraysorted(int arr[],int n){
	// base case
	if(n==1){
		return true;
	}

	// rec case
	if(isarraysorted(arr,n-1) and arr[n-2]<=arr[n-1]){
		return true;
	}

	return false;

}

bool isarraysorted2(int arr[],int n){
	// base case
	if(n==1){
		return true;
	}

	// rec case
	if(isarraysorted2(arr+1,n-1) and arr[0]<=arr[1]){
		return true;
	}

	return false;

}

bool isarraysorted3(int arr[],int n,int i){
	// base case
	if(i==n-1){
		return true;
	}
	
	// rec case
	if(arr[i]<=arr[i+1] and isarraysorted3(arr,n,i+1)){
		return true;
	}

	return false;

}
int main(){

	int arr[]={3,5,7,8,9};
	int n=sizeof(arr)/sizeof(int);
	// if(isarraysorted3(arr,n,0)==true){
	// 	cout<<"array is sorted"<<endl;
	// }
	// else{
	// 	cout<<"array is not sorted"<<endl;
	// }

	// if(isarraysorted2(arr,n)==true){
	// 	cout<<"array is sorted"<<endl;
	// }
	// else{
	// 	cout<<"array is not sorted"<<endl;
	// }
	if(isarraysorted(arr,n)==true){
		cout<<"array is sorted"<<endl;
	}
	else{
		cout<<"array is not sorted"<<endl;
	}

	// isarraysorted2(arr,n);
	// isarraysorted3(arr,n,0);
	
	

	return 0;
}