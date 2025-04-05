#include<iostream>
#include<climits>
using namespace std;
int nstaircase(int n,int k){
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}

	int ans=0;
	for (int i = 1; i <=k; ++i)
	{
		ans=ans+nstaircase(n-i,k);
	}
	return ans;
}

int nstaircasetd(int n,int k,int *arr){
	if(n<0){
		return 0;
	}
	if(n==0){
		return arr[n]=1;
	}
	if(arr[n]!=-1){
		return arr[n];
	}

	int ans=0;
	for (int i = 1; i <=k; ++i)
	{
		ans=ans+nstaircasetd(n-i,k,arr);
	}
	return arr[n]=ans;
}


int bu(int n,int k){
	int *arr=new int[n+1];
	arr[0]=1;
	for(int m=1;m<=n;m++){

	int ans=0;
	for(int j=1;j<=k;j++){ //4
	if(m-j>=0){
	ans=ans+arr[m-j];
}
}
arr[m]=ans;

}

for (int i = 0; i <=n; ++i)
{
	cout<<arr[i]<<" ";
}
cout<<endl;

return arr[n];

}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<nstaircase(n,k)<<endl;
	int *arr=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}
	cout<<nstaircasetd(n,k,arr)<<endl;
	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	cout<<bu(n,k)<<endl;




	return 0;
}