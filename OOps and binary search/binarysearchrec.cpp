#include<iostream> 
using namespace std;

int binarysearchrec(int *arr,int s,int e,int key){

	// base case
	if(s>e){
		return -10;
	}


	// rec case
	int mid=(s+e)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]< key){
		return binarysearchrec(arr,mid+1,e,key);
	}
	else{
		return binarysearchrec(arr,s,mid-1,key);
	}


}
int main(){


	int arr[]={3,5,6,8,10,27};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;

	int x=binarysearchrec(arr,0,n-1,key);
	if(x<0){
		cout<<"key is not present"<<endl;
	}
	else{
		cout<<"key is  present at index "<<x<<endl;
	}




	return 0;
}