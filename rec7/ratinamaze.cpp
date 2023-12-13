#include<iostream>
using namespace std;
int sol[100][100]={0};
bool ratinamaze(char maze[100][100],int i,int j,int r,int c){
	// base case
	if(i==r-1 and j==c-1){
		sol[i][j]=1;
		for (int l = 0; l <r;l++)
		{
			for(int k=0;k<c;k++){
				cout<<sol[l][k]<<" ";

			}
			cout<<endl;
		}
		cout<<endl;
		sol[i][j]=0;
		// return true;
		return false;

	}


	// rec case
	sol[i][j]=1;
	// forward
	if(j<=c-2 and maze[i][j+1]!='B'){
		bool aagekans=ratinamaze(maze,i,j+1,r,c);
		if(aagekans==true){
			return true;
		}

	}

	// downward
	if(i<=r-2 and maze[i+1][j]!='B'){
		bool aagekans=ratinamaze(maze,i+1,j,r,c);
		if(aagekans==true){
			return true;
		}

	}
	sol[i][j]=0;
	return false;
}
int main(){
	char maze[100][100]={
		"UUBU",
		"UUUB",
		"BUUB",
		"BUUU"
	};
	// int sol[100][100]={0};
	// ratinamaze(maze,0,0,4,4,sol);
	ratinamaze(maze,0,0,4,4);
	return 0;
}