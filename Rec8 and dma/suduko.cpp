#include<iostream>
#include<cmath>
using namespace std;
bool kyarakhsaktehai(int mat[9][9],int i,int j,int num,int n){
	// for row
	for(int k=0;k<n;k++){
		if(mat[i][k]==num){
			return false;
		}
	}

	// for col
	for(int k=0;k<n;k++){
		if(mat[k][j]==num){
			return false;
		}
	}

	// root n *root n

	int p=sqrt(n);//3
	int si=(i/p)*p;
	int sj=(j/p)*p;

	for(int l=si;l<si+p;l++){
		for(int m=sj;m<sj+p;m++){
			if(mat[l][m]==num){

		return false;
	}

		}
	}

	return true;
	


}
bool sudukosolver(int n,int i,int j,int mat[9][9]){
	// base case
	if(i==n){
		for (int l = 0; l <n;l++)
		{
			for (int m = 0; m <n ;m++)
			{
				cout<<mat[l][m]<<" ";
			}

			cout<<endl;
		}
		cout<<endl;
		// return true;

		return false;
	}

	// rec case
	if(j==n){
		return sudukosolver(n,i+1,0,mat);
	}
	// filled
	if(mat[i][j]!=0){
		return sudukosolver(n,i,j+1,mat);
	}
	else{
		for(int num=1;num<=n;num++){
			if(kyarakhsaktehai(mat,i,j,num,n)){
			mat[i][j]=num;
			bool aagekaans=sudukosolver(n,i,j+1,mat);
			if(aagekaans==true){
				return true;
			}
			mat[i][j]=0;//backtracking

		}

		}

		return false;
		


	}
}
int main(){
int mat[9][9] =
		{{0,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};

		sudukosolver(9,0,0,mat);


		return 0;

		}
