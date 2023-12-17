#include<iostream> 
using namespace std;

int binarysearch(int *arr,int s,int e,int key){

	while(s<=e){
		int mid=(s+e)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]<key){
		s=mid+1;
	}
	else{
		e=mid-1;
	}

	}


	return -10;
	


}
int main(){


	int arr[]={3,5,6,8,10,
		,27};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;

	int x=binarysearch(arr,0,n-1,key);
	if(x<0){
		cout<<"key is not present"<<endl;
	}
	else{
		cout<<"key is  present at index "<<x<<endl;
	}




	return 0;
}