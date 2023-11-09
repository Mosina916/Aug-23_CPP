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

	cout<<&arr[0][0]<<endl;

	cout<<&arr[1][0]<<endl;
	cout<<&arr[2][0]<<endl;

	
	
	
	return 0;
}