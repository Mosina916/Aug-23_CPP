#include<iostream>
#include<list>
#include<climits>
#include<queue>
using namespace std;

int main(){
	// int arr[]={5,-4,2,-6,3,9,-2,4,-12};
	// int arr[]={-5,-4,-2,-6,-3};
	int arr[]={5,-4,-2,6,3};


	int n=sizeof(arr)/sizeof(int);
	int cs=0;
	int ms=INT_MIN;
	for (int i = 0; i <=n-1; ++i)
	{
		cs=cs+arr[i];
		ms=max(ms,cs);
		if(cs<0){
			cs=0;
		}
	}

	printf("%d\n",ms);


	

	return 0;
}