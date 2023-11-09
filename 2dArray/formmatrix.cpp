#include<iostream>
using namespace std;
void formmatrix(char arr[100][100],int r,int c){
	int sc=0,ec=c-1,sr=0,er=r-1;

	char ch='X';


	while(sc<=ec and sr<=er){
		// forward
	for (int k = sc; k<=ec;k++)
	{
		arr[sr][k]=ch;
	}
	sr++;

	// downward
	for (int p = sr;p<=er;p++)
	{
		arr[p][ec]=ch;
	}
	ec--;

	if(sr<=er){
		// backward
	for (int l=ec;l>=sc;l--)
	{
		arr[er][l]=ch;
	}

	}

	
	er--;

	// 
	if(sc<=ec){
		for (int x=er;x>=sr;x--)
	{
		arr[x][sc]=ch;
	}
	

	}
	sc++;

	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}
	

	}

	


}

	

int main(){
	char arr[100][100];
	int r,c;
	cin>>r>>c;
	formmatrix(arr,r,c);
	

	for (int i = 0; i <=r-1; ++i)
	{
		for(int j=0;j<=c-1;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}