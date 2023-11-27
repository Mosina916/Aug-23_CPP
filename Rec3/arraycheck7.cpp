#include<iostream>
using namespace std;
// bool checkis7present(int arr[],int n){
// 	// base case
// 	if(n==0){
// 		return false;
// 	}


// 	// rec case
// 	if(arr[0]==7){
// 		return true;

// 	}
// 	return checkis7present(arr+1,n-1);



// }

// bool checkis7present2(int arr[],int n){
// 	// base case
// 	if(n==0){
// 		return false;
// 	}


// 	// rec case
// 	if(arr[n-1]==7){
// 		return true;

// 	}
// 	return checkis7present2(arr,n-1);



// }

bool checkis7present3(int arr[],int n,int i){
	// base case
	if(i==n){
		return false;
	}
	// rec case
	if(arr[i]==7){
		return true;

	}
	return checkis7present3(arr,n,i+1);
}
int main(){
	int arr[]={3,4,7,5,7,2,3};
	int n=sizeof(arr)/sizeof(int);
	// checkis7present(arr,n);
	if(checkis7present3(arr,n,0)==true){
		cout<<"7 is present"<<endl;
	}
	else{
		cout<<"7 is not present"<<endl;
	}



	return 0;
}