#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;

	int arr[100000];
	int m=INT_MIN;
	
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
		// m=max(m,arr[i]);
	}

	// m-->10

	int freq[32]={0};
	for (int i = 0; i <n; ++i)
	{
		int j=0;
		int no=arr[i];
		while(no!=0){
			freq[j]=freq[j]+(no&1);
			j++;
			no=no>>1;

		}
	}

	for (int i = 0; i <=31; ++i)
	{
		freq[i]=freq[i]%3;

		

	}
	cout<<endl;

	// array convert dec
	int mult=1;
	int fans=0;

	for (int i = 0; i <=31; ++i)
	{
		fans=fans+freq[i]*mult;//0*1-->6
		mult=mult<<1;//8
	}


	cout<<fans<<endl;


	
	return 0;
}