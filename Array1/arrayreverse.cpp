#include<iostream>
using namespace std;
int main(){
	
	// int arr[]={5,7,4,3,2,1,8,9};
	// int n=sizeof(arr)/sizeof(int);//8
	// 9 8 1 2 3 4 7 5
	int arr[1000];
	int n;
	cin>>n;//10
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}

	// int i=0;
	// int j=n-1;
	// while(i<j){
		// swap(arr[i],arr[j]);
	// 	i++;
	// 	j--;
	// }
	for(int i=0,j=n-1;i<j;i++,j--){
		swap(arr[i],arr[j]);

	}
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	
	// for(int i=n-1;i>=0;i--){
	// 	cout<<arr[i]<<" ";
	// }

	cout<<endl;
	



	return 0;
}