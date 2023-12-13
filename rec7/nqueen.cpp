#include<iostream>
using namespace std;
int co=0;
bool kyarakhsaktehai(int board[100][100],int i,int j,int n){
	// for vertical check

	for(int l=0;l<i;l++){
		if(board[l][j]==1){
		return false;
	}

	}


	// right diagonal 

	int u=i-1;//1
	int v=j+1;//3
	while(u>=0 and v<n){
		if(board[u][v]==1){
		return false;
	}
	u--;
	v++;

	}

	//left diagonal 

	u=i-1;//1
	 v=j-1;//1
	while(u>=0 and v>=0){
		if(board[u][v]==1){
		return false;
	}
	u--;
	v--;

	}

	return true;
	

	
}
bool nqueen(int n,int board[100][100],int i){
	// base case
	if(i==n){
		co++;
		for (int l = 0; l <n;l++)
		{
			for(int k=0;k<n;k++){
				cout<<board[l][k]<<" ";

			}
			cout<<endl;
		}
		cout<<endl;

		// return true;
		return false;
	}



	// rec case
	for(int j=0;j<n;j++){
		if(kyarakhsaktehai(board,i,j,n)){
		board[i][j]=1;
		bool aagekaans=nqueen(n,board,i+1);
		if(aagekaans==true){
			return true;
		}

		board[i][j]=0;//backtracking


	}

	}

	return false;
	
}

int main(){
	int n;
	cin>>n;

	int board[100][100]={0};
	nqueen(n,board,0);

	cout<<co<<endl;

	
	return 0;
}