#include<iostream> 
#include<cmath>
using namespace std;
int main(){
	// 6 1 2 2 4--
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);

	for(int j=0;j<=n-2;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}

	for(int j=0;j<=n-3;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
	for(int j=0;j<=n-4;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}

	for(int j=0;j<=n-5;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}


	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return 0;
}