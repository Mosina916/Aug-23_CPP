#include<iostream>
#include<list>
#include<climits>
#include<queue>
using namespace std;

int main(){
	// int arr[]={5,-4,2,-6,3,9,-2,4,-12};
	int arr[]={2,3,4,-12,4,5,-2};
	// int arr[]={3,3,-4,-5,9,2};


	int n=sizeof(arr)/sizeof(int);//6
	int cs=0;
	int ms=INT_MIN;
	int csum=0;
	for (int i = 0; i <=n-1; ++i)
	{
		// {-3,-3,4,5,-9,-2
		csum=csum+arr[i];//8
		cs=cs+arr[i];//11
		ms=max(ms,cs);//11
		if(cs<0){
			cs=0;
		}
		arr[i]=-(arr[i]);
	}

	// csum-->8
	// ms=11
	int op1=ms;

	 // {-3,-3,4,5,-9,-2

	 cs=0;
	ms=INT_MIN;

	for (int i = 0; i <=n-1; ++i)
	{
		cs=cs+arr[i];//-2
		ms=max(ms,cs);//9
		if(cs<0){
			cs=0;
		}
	}

	int op2=csum-(-ms);//17

	cout<<max(op1,op2)<<endl;




	

	return 0;
}