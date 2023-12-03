#include<iostream>
using namespace std;
void mergewtwosortedarr(int arr1[],int n,int arr2[],int m){
	int i=0;
	int j=0;
	int k=0;
	int temp[10000];

	while(i<n and j<m){
		if(arr1[i]>arr2[j]){
		temp[k]=arr2[j];
		k++;
		j++;

	}
	else{
		temp[k]=arr1[i];
		i++;
		k++;
	}

	}

	while(j<m){
		temp[k]=arr2[j];
	j++;
	k++;

	}


	while(i<n){
		temp[k]=arr1[i];
	i++;
	k++;

	}
	// print sorted array

	for(int l=0;l<k;l++){
		cout<<temp[l]<<" ";

	}

	cout<<endl;
}
int main(){
	int arr1[]={1,3,4,6};
	int n=sizeof(arr1)/sizeof(int);
	int arr2[]={0,5,9,10,11};
	int m=sizeof(arr2)/sizeof(int);

	mergewtwosortedarr(arr1,n,arr2,m);




	return 0;
}