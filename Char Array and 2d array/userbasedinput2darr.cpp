#include<iostream>
using namespace std;
int main(){
	
	// datatype name[rows][cols];//you can ignore no of rows but not cols
	// datatype name[][cols];


	// int arr[3][4]={
	// 	{3,5,9,16},
	// 	{4,5,19,20},
	// 	{23,2,0,9}
	// };
	int arr[1000][1000];
	int r,c;
	cin>>r>>c;//3//4


	for(int i=0;i<=r-1;i++){
		for(int j=0;j<=c-1;j++){
		cin>>arr[i][j];
	}

	}


	
	for(int i=0;i<=r-1;i++){
		for(int j=0;j<=c-1;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;

	}

	
	
	
	return 0;
}