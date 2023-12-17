#include<iostream>
#include<cmath>
using namespace std;
int main(){
	// sma
	// int arr[4][3];
	int r,c;
	cin>>r>>c;//4 3

	int **tptr=new int*[r];
	for (int i = 0; i <r; ++i)
	{
		tptr[i]=new int[c];

	}

	for (int i = 0; i <r; ++i)
	{
		for (int j = 0; j <c; j++)
		{
			cin>>tptr[i][j];
		}
	}

	for (int i = 0; i <r; ++i)
	{
		for (int j = 0; j <c; j++)
		{
			cout<<tptr[i][j]<<" ";
		}

		cout<<endl;
	}

	for(int i=0;i<r;i++){
		delete[] tptr[i];

		tptr[i]=NULL;

	}

	delete []  tptr;
	tptr=NULL;

	

		return 0;

}
