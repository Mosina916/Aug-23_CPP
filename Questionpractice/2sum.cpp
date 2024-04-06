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
	// 1 3 4 2 5-->1 2 3 4 5
	int target;
	cin>>target;

	for (int i = 0; i <=n-2; i++)
	{
		for (int j = i+1; j <=n-1; j++)
		{
			if(arr[i]+arr[j]==target){
				cout<<arr[i]<<" and "<<arr[j]<<endl;
			}
			
		}
	}



	return 0;
}