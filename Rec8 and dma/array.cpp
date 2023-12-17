#include<iostream>
#include<cmath>
using namespace std;
int main(){
	// sma
	// int arr[100];

	// dma
	int *ptr=new int[100];
	int n;
	cin>>n;

	// int *n=new int;
	// cin>>*n;//5


	for (int i = 0; i < n; ++i)
	{
		cin>>ptr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<ptr[i]<<endl;
	}

	// delete[]pointer;
	delete[] ptr;
	ptr=NULL;


		return 0;

}
