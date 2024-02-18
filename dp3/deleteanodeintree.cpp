#include <iostream>
using namespace std;
// int nstircase(int n,int k){//2
// 	if(n==0){
// 		return 1;
// 	}
// 	if(n<0){
// 		return 0;
// 	}
// 	int ans=0;
// 	for (int i = 1; i <=k; ++i)
// 	{
// 		ans=ans+nstircase(n-i,k);
// 	}
// 	return ans;
// 	// return nstircase(n-1)+nstircase(n-2)+nstircase(n-3);
// }

int nstircasetd(int n,int k,int *arr){//2
	if(n==0){
		return arr[n]=1;
	}
	if(n<0){
		return 0;
	}
	if(arr[n]!=-1){
		return arr[n];
	}
	int ans=0;
	for (int i = 1; i <=k; ++i)
	{
		ans=ans+nstircasetd(n-i,k,arr);
	}
	return arr[n]=ans;
	// return nstircase(n-1)+nstircase(n-2)+nstircase(n-3);
}
int bottomup(int n,int k){//5 3

	int *arr=new int[n+1];
	arr[0]=1;

	for(int i=1;i<=n;i++){
		int ans=0;
	for(int l=1;l<=k;l++){
		if(i-l>=0){
			ans=ans+arr[i-l];

		}
	}
	arr[i]=ans;

	}
	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	return arr[n];
	



}
int main(){
	
	return 0;
}