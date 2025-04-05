#include<iostream>
using namespace std;
int wineprofit(int *price,int l,int r,int year){
	if(l>r){
		return 0;
	}
	int op1=year*price[l]+wineprofit(price,l+1,r,year+1);
	int op2=year*price[r]+wineprofit(price,l,r-1,year+1);

	return max(op1,op2);

}


int wineprofittd(int *price,int l,int r,int year,int arr[100][100]){
	if(l>r){
		return arr[l][r]=0;
	}
	if(arr[l][r]!=-1){
		return arr[l][r];
	}
	int op1=year*price[l]+wineprofittd(price,l+1,r,year+1,arr);
	int op2=year*price[r]+wineprofittd(price,l,r-1,year+1,arr);

	return arr[l][r]=max(op1,op2);

}


int bu(int n,int *price){
	int arr[100][100]={0};
	// diagonal fill

	for(int k=0;k<n;k++){
	arr[k][k]=n*price[k];
}

	for(int p=n-2;p>=0;p--){//2
	for(int q=0;q<n;q++){//4
	if(q>p){
		int y=n-(q-p);//4
		int op1=price[p]*y+arr[p+1][q];
		int op2=price[q]*y+arr[p][q-1];

		arr[p][q]=max(op1,op2);


	}
}
}

	for (int i = 0; i <n; ++i)
	{
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}


	cout<<endl;


return arr[0][n-1];



}
int main(){
	int price[]={2,3,5,1,4};
	int n=sizeof(price)/sizeof(int);//5
	cout<<wineprofit(price,0,n-1,1)<<endl;
	int arr[100][100];

	for (int i = 0; i <100; ++i)
	{
		for(int j=0;j<100;j++){
			arr[i][j]=-1;
		}
	}

	cout<<wineprofittd(price,0,n-1,1,arr)<<endl;

	for (int i = 0; i <n; ++i)
	{
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<bu(n,price)<<endl;

	return 0;
}