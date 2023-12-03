#include<iostream>
using namespace std;
void bubblesortrec(int arr[],int n,int i,int j){//5 4 3 2 1

	// base case
	if(i==n-1){
		return;
	}


	// rec case
	if(j==n-1-i){
		// j wala loop nahi chalega 
		bubblesortrec(arr,n,i+1,0);

	}
	else{
		if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
			bubblesortrec(arr,n,i,j+1);



	}
	



}
int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	bubblesortrec(arr,n,0,0);

	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	

	// for(int i=0;i<=n-2;i++){
	// 	for(int j=0;j<=n-2-i;j++){ //optimization
	// 		if(arr[j]>arr[j+1]){
	// 			swap(arr[j],arr[j+1]);
	// 		}
	// 	}


	// }


	


	return 0;
}