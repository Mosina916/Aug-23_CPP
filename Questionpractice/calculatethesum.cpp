#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;

	int arr[100000];

	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
		// m=max(m,arr[i]);
	}

	int b[100000];

	int tq;
	cin>>tq;//2
	while(tq--){
		int q;
		cin>>q;//0
		for(int j=0;j<n;j++){
			int picindex=(n+j-q)%n;
		b[j]=arr[j]+arr[picindex];


		}
		// copy b ko arr mai
		for (int i = 0; i <n; ++i)
		{
			arr[i]=b[i];
		}
		

	}
	long long int sum=0;

	for (int i = 0; i <n; ++i)
	{
		sum+=arr[i];

		
	}

	cout<<sum%(1000000007)<<endl;

	
	return 0;
}