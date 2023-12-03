#include<iostream>
using namespace std;
void mergewtwosortedarr(int arr[],int s,int e){
	int i=s;
	int mid=(s+e)/2;
	int j=mid+1;
	int k=s;
	int temp[10000];

	while(i<=mid and j<=e){
		if(arr[i]>arr[j]){
		temp[k]=arr[j];
		k++;
		j++;

	}
	else{
		temp[k]=arr[i];
		i++;
		k++;
	}

	}

	while(j<=e){
		temp[k]=arr[j];
	j++;
	k++;

	}


	while(i<=mid){
		temp[k]=arr[i];
	i++;
	k++;

	}
	// copy temp into arr 
	for(int l=s;l<=e;l++){
		arr[l]=temp[l];
	}


	
}
void mergesort(int *arr,int s,int e){
	// base case
	if(s==e){
		return;
	}
	// rec case
	int mid=(s+e)/2;
	mergesort(arr,s,mid);//3,1,4-->1 3 4
	mergesort(arr,mid+1,e);//5,2-->2 5
	mergewtwosortedarr(arr,s,e);
}
int main(){
	int arr[]={3,1,4,5,2};
	int n=sizeof(arr)/sizeof(int);

	mergesort(arr,0,n-1);

	for (int i = 0; i <=n-1; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;




	return 0;
}