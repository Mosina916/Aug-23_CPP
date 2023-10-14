#include<iostream>
using namespace std;
int main(){
	int arr[]={3,1,5,4,3,2,5,5,4,3,7,7,2,1,4};
	int n=sizeof(arr)/sizeof(int);
	int j;
	// counting sort
	// 0-->0
	// 1-->2
	// 2-->2
	// 3-->3
	// 4-->3
	// 5-->3
	// 6-->0
	// 7-->2
	// 1 1 2 2 3 3 3 4 4 4 5 5 5 7 7



	

	// print
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;






	return 0;
}