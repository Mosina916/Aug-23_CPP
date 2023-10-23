#include<iostream>
using namespace std;
void bubblesort(){
	int arr[]={3,55,5,4,3,7,7,2,1,4};
	int n=sizeof(arr)/sizeof(int);
	int j;
	// insertion sort
	for(int i=1;i<=n-1;i++){
		int ele=arr[i];
		for(j=i-1;j>=0;j--){
			if(ele<arr[j]){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]=ele;
	}
	// print
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


}
int main(){
	bubblesort();
	

	return 0;
}