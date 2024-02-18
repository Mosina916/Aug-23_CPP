#include <iostream>
using namespace std;
int wineprofit(int price[],int l,int r,int year){
	if(l>r){
		return 0;
	}

	int op1=price[l]*year+wineprofit(price,l+1,r,year+1);
	int op2=price[r]*year+wineprofit(price,l,r-1,year+1);

	return max(op1,op2);

}
int wineprofittd(int price[],int l,int r,int year,int arr[100][100]){
	if(l>r){
		return arr[l][r]=0;
	}
	if(arr[l][r]!=0){
		return arr[l][r];
	}

	int op1=price[l]*year+wineprofittd(price,l+1,r,year+1,arr);
	int op2=price[r]*year+wineprofittd(price,l,r-1,year+1,arr);

	return arr[l][r]=max(op1,op2);

}

int buwineprofit(int price[],int n){
	int arr[100][100]={0};

	// diagonal fill


	for(int i=0;i<n;i++){
		arr[i][i]=price[i]*n;

	}


	for(int a=n-2;a>=0;a--){
	for(int b=0;b<n;b++){
		if(b>a){
		int year=n-(b-a);//4
		int op1=year*price[a]+arr[a+1][b];//24
		int op2=year*price[b]+arr[a][b-1];//21
		arr[a][b]=max(op1,op2);



	}

	}
}


for(int i=0;i<n;i++){
	for (int j = 0; j <n;j++)
	{
		cout<<arr[i][j]<<'\t';
	}

	cout<<endl;
}

return arr[0][n-1];

	
	

}
int main(){

	int price[]={2,3,5,1,4};
	int n=sizeof(price)/sizeof(int);//5
	int arr[100][100]={0};


	cout<<wineprofittd(price,0,n-1,1,arr)<<endl;

	for(int i=0;i<n;i++){
	for (int j = 0; j <n;j++)
	{
		cout<<arr[i][j]<<'\t';
	}

	cout<<endl;
}

	// cout<<wineprofit(price,0,n-1,1)<<endl;
	// cout<<buwineprofit(price,n)<<endl;

	
	



	return 0;
}