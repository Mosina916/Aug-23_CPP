#include<iostream>
using namespace std;
int fibo(int n){//5
	// base case
	if(n==0||n==1){
		return n;
	}
	// check


	return fibo(n-1)+fibo(n-2);
	
}
int fibotd(int n,int *arr){//5
	// base case
	if(n==0||n==1){
		return arr[n]=n;
	}
	// check
	if(arr[n]!=-1){
		return arr[n];
	}
	

	return arr[n]=fibotd(n-1,arr)+fibotd(n-2,arr);
	
}

int bu(int n){//5
	int *arr=new int[n+1];
	arr[0]=0;
	arr[1]=1;

	for(int i=2;i<=n;i++){
	arr[i]=arr[i-1]+arr[i-2];
}		


	// for(int i=0;i<=n;i++){
	// 	cout<<arr[i]<<" ";
	// }

	cout<<endl;
	return arr[n];


}


int main(){
	int n;
	cin>>n;//5
		cout<<bu(n)<<endl;
		int *arr=new int[n+1];
	for(int i=0;i<=n;i++){
		arr[i]=-1;
	}


	cout<<fibotd(n,arr)<<endl;
	cout<<fibo(n)<<endl;


	


	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;
	
	
	return 0;
}