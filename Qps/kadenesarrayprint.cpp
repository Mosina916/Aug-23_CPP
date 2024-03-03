#include<iostream>
#include<climits>
using namespace std;
int main(){
	int left,right;
	int arr[]={2,-3,-4,-1,2,1,5,3};
	int n=sizeof(arr)/sizeof(int);
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++){
	for(int j=i;j<n;j++){
		int sum=0;
	for(int k=i;k<=j;k++){
		sum=sum+arr[k];//-1

	}
	if(sum>maxsum){
		left=i;
		right=j;
		maxsum=sum;//5
	}


	}
}
for(int l=left;l<=right;l++){
	cout<<arr[l]<<" ";
}
cout<<endl;


cout<<"maxsum is "<<maxsum<<endl;
	



	return 0;
}