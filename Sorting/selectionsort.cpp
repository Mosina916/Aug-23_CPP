#include<iostream>
using namespace std;
int main(){
	int arr[]={3,5,2,1,4};
	int n=sizeof(arr)/sizeof(int);

	// selection sort
	for(int pos=0;pos<=n-2;pos++){
		int min=pos;
		for(int j=pos+1;j<=n-1;j++){
			if(arr[j]<arr[min]){
				min=j;
			}

		}
		swap(arr[min],arr[pos]);
	}

	
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;






	return 0;
}