#include <iostream>
using namespace std;
int mincoinsneeded(int coins[],int n,int amount){
	// base case()
	if(amount==0){
		return 0;
	}


	// rec case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int bachaamount=amount-coins[i];//13-9
	if(bachaamount>=0){
		int rans=mincoinsneeded(coins,n,bachaamount);
		if(rans<ans){
			ans=rans+1;
		}
	}

	}
	return ans;
	
}
int mincoinsneededtd(int coins[],int n,int amount,int *arr){
	// base case()
	if(amount==0){
		return arr[amount]=0;
	}
	if(arr[amount]!=INT_MAX){
		return arr[amount];
	}

	// rec case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int bachaamount=amount-coins[i];//13-9
	if(bachaamount>=0){
		int rans=mincoinsneededtd(coins,n,bachaamount,arr);
		if(rans<ans){
			ans=rans+1;
		}
	}

	}
	return arr[amount]=ans;
	
}


int mincoinsneededbu(int coins[],int n,int amount){
		int *arr=new int[amount+1];
		
		for (int i = 0; i <=amount; ++i)
		{
			arr[i]=INT_MAX;
		}
		arr[0]=0;

		for(int currentamount=1;currentamount<=amount; currentamount++){
		for(int j=0;j<n;j++){
			int bachaamount=currentamount-coins[j];
		if(bachaamount>=0){
			arr[currentamount]=min(arr[currentamount],arr[bachaamount]+1);

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

	int coins[]={9,6,5,1};
	int n=sizeof(coins)/sizeof(int);
	int amount;
	cin>>amount;//13

	cout<<mincoinsneededbu(coins,n,amount)<<endl;

	// cout<<mincoinsneeded(coins,n,amount)<<endl;
	// int *arr=new int[amount+1];

	// for (int i = 0; i <=amount; ++i)
	// {
	// 	arr[i]=INT_MAX;

	// }

	// cout<<mincoinsneededtd(coins,n,amount,arr)<<endl;
	// for (int i = 0; i <=amount; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;




	return 0;
}