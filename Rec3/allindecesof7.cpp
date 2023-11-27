#include<iostream>
using namespace std;
void allindices(int *arr,int n,int i){
	// b case
	if(i==n){
		return;
	}


	// rec case
	if(arr[i]==7){
		cout<<i<<" ";//0 2 4 5

	}
	allindices(arr,n,i+1);

}
int main(){
	int arr[]={7,4,7,5,7,7,3,3};//2 4 5
	int n=sizeof(arr)/sizeof(int);

	allindices(arr,n,0);




	return 0;
}