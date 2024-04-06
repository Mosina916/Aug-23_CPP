#include<iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int arr[1000000];
	for (i = 0; i <n; ++i)
	{
		cin>>arr[i];
	}

	sort(arr,arr+n);
	// 1 2 3 4 5 6 7 8 9
	int target;
	cin>>target;//10

	for(int i=0;i<=n-3;i++){
		int l=i+1,r=n-1;

	while(l<r){
		if(arr[i]+arr[l]+arr[r]>target){
		r--;
	}
	else if(arr[i]+arr[l]+arr[r]<target){
		l++;
	}
	else{
		cout<<arr[i]<<", "<<arr[l]<<" and "<<arr[r]<<endl;
		l++;
		r--;
	}

	}
	}
	
	


	return 0;
}