#include<iostream>
using namespace std;
void spiralprint(int arr[7][3],int r,int c){
	int sc=0,ec=c-1,sr=0,er=r-1;


	while(sc<=ec and sr<=er){
		// forward
	for (int k = sc; k<=ec;k++)
	{
		cout<<arr[sr][k]<<" ";
	}
	sr++;

	// downward
	for (int p = sr;p<=er;p++)
	{
		cout<<arr[p][ec]<<" ";
	}
	ec--;

	if(sr<=er){
		// backward
	for (int l=ec;l>=sc;l--)
	{
		cout<<arr[er][l]<<" ";
	}

	}

	
	er--;

	// 
	if(sc<=ec){
		for (int x=er;x>=sr;x--)
	{
		cout<<arr[x][sc]<<" ";
	}
	

	}
	sc++;
	

	}

	
}
int main(){
	// int arr[4][4]={
	// 	{1,3,4,5},
	// 	{2,6,7,8},
	// 	{3,9,13,14},
	// 	{5,10,16,32}
	// };
	int arr[7][3]={
		{1,3,  4},
		{2,6,  7},
		{3,9,  13},
		{5,10, 16},
		{4,5,  6},
		{8,5,  6},
		{4,5,  3}
	};

	int r=7,c=3;
	spiralprint(arr,r,c);
	

	return 0;
}