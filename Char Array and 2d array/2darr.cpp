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
	int arr[][4]={
		{3,5,9,16},
		{4,5,19,20},
		{23,2,0,9}
	};

	// to access ele 
	// arrayname[rn][cn];//

	// cout<<arr[2][3]<<endl;


	// cout<<arr[0][0]<<endl;
	// cout<<arr[0][1]<<endl;
	// cout<<arr[0][2]<<endl;
	// cout<<arr[0][3]<<endl;

// IST
	// for(int j=0;j<=3;j++){
	// 	cout<<arr[0][j]<<" ";
	// }
	// cout<<endl;


// 2ND ROW 
	// for(int j=0;j<=3;j++){
	// 	cout<<arr[1][j]<<" ";
	// }
	// cout<<endl;

	// 3rd ROW 
	// for(int j=0;j<=3;j++){
	// 	cout<<arr[2][j]<<" ";
	// }
	// cout<<endl;


	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;

	}

	
	
	
	return 0;
}