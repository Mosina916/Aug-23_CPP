#include<iostream>
using namespace std;
int height[1000000],leftmax[1000000],rightmax[1000000];

int main(){
	int t;
	cin>>t;//2

	for(int l=1;l<=t;l++){
		int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		cin>>height[i];
	}

	leftmax[0]=height[0];
	for (int i = 1; i <n ; ++i)
	{
		leftmax[i]=max(leftmax[i-1],height[i]);
	}

	rightmax[n-1]=height[n-1];
	for (int i = n-2;i>=0 ;i--)
	{
		rightmax[i]=max(rightmax[i+1],height[i]);
	}


	int water=0;
	for (int i = 0; i <n; ++i)
	{
		water=water+min(leftmax[i],rightmax[i])-height[i];
	}

	cout<<water<<endl;

	}

	



	return 0;
}