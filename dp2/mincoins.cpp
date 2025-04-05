#include<iostream>
using namespace std;
int mincoinsneeded(int amount,int *coins,int n){
	if(amount==0){
		return 0;
	}

	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int bachaamout=amount-coins[i];//0
		if(bachaamout>=0){
		int rkaans=mincoinsneeded(bachaamout,coins,n);//2
		if(rkaans<ans){
			ans=rkaans+1;//2
		}
	}
	}
	return ans;
}

int mincoinsneededtd(int amount,int *coins,int n,int *arr){
	if(amount==0){
		return arr[amount]=0;
	}
	if(arr[amount]!=INT_MAX){
		return arr[amount];
	}


	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int bachaamout=amount-coins[i];//0
		if(bachaamout>=0){
		int rkaans=mincoinsneededtd(bachaamout,coins,n,arr);//2
		if(rkaans<ans){
			ans=rkaans+1;//2
		}
	}
	}
	return arr[amount]=ans;
}


int bu(int *coins,int n,int amount){
	int *arr=new int[amount+1];
	for (int i = 0; i <=amount; ++i)
	{
		arr[i]=INT_MAX;
	}
	arr[0]=0;
	for(int abhikaamt=1;abhikaamt<=amount; abhikaamt++){//2
	for(int k=0;k<n;k++){
	int bamt=abhikaamt-coins[k];//1
	if(bamt>=0){//0
		arr[abhikaamt]=min(arr[abhikaamt],arr[bamt]+1);

	}

}
}


for (int i = 0; i <=amount; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

return arr[amount];



}
int main(){
	int amount;
	cin>>amount;//13
	int coins[]={9,6,5,1};
	int n=sizeof(coins)/sizeof(int);
	cout<<mincoinsneeded(amount,coins,n)<<endl;

	int *arr=new int [amount+1];

	for (int i = 0; i <=amount; ++i)
	{
		arr[i]=INT_MAX;
	}

	cout<<mincoinsneededtd(amount,coins,n,arr)<<endl;

	for (int i = 0; i <=amount; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	cout<<bu(coins,n,amount)<<endl;



	return 0;
}