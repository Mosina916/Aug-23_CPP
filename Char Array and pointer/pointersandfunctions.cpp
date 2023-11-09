#include<iostream>
using namespace std;
// void update(int b[],int n){
void update(int *b,int n){
	for(int i=0;i<n;i++){
		b[i]=b[i]+10;
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}

	cout<<endl;
a
}
int main(){
	int arr[]={3,2,4,1,5};
	int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	cout<<arr<<endl;
	update(arr,n);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return 0;
}