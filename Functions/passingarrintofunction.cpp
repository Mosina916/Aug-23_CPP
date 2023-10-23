#include<iostream>
using namespace std;
void f(int farhan[],int n){
	// 15,14,13,12,11}
	for(int i=0;i<=n-1;i++){
		farhan[i]=farhan[i]+10;


	}

	for(int i=0;i<=n-1;i++){
		cout<<farhan[i]<<" ";
	}//15,14,13,12,11

	cout<<endl;
	
}

int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;//5 4 3 2 1
	f(arr,n);


	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;//15 14 13 12 11


	return 0;
}