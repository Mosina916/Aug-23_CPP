#include <iostream>
using namespace std;
// int mincostpath(int cost[4][4],int x,int y){
// 	// base case
// 	if(x==0 and y==0){
// 		return cost[x][y];

// 	}
// 	if(x<0){
// 		return INT_MAX;
// 	}
// 	if(y<0){
// 		return INT_MAX;
// 	}


// 	// rec case
// 	int op1=mincostpath(cost,x-1,y);
// 	int op2=mincostpath(cost,x,y-1);

// 	return min(op1,op2)+cost[x][y];
// }

int mincostpathtd(int cost[4][4],int x,int y,int sol[100][100]){
	// base case
	if(x==0 and y==0){
		return sol[x][y]=cost[x][y];

	}
	if(x<0){
		return INT_MAX;
	}
	if(y<0){
		return INT_MAX;
	}
	if(sol[x][y]!=-1){
		return sol[x][y];
	}


	// rec case
	int op1=mincostpathtd(cost,x-1,y,sol);
	int op2=mincostpathtd(cost,x,y-1,sol);

	return sol[x][y]=min(op1,op2)+cost[x][y];
}

int bottomup(int cost[4][4],int x,int y){
	int sol[100][100];

	for(int i=0;i<=x;i++){
		for(int j=0;j<=y;j++){
		if(i==0 and j==0){
		sol[i][j]=cost[i][j];

	}
	else if(i==0){
		sol[i][j]=sol[i][j-1]+cost[i][j];

	}

	else if(j==0){
		sol[i][j]=sol[i-1][j]+cost[i][j];

	}
	else{
		sol[i][j]=min(sol[i-1][j],sol[i][j-1])+cost[i][j];
	}

	}
	

	}



	for (int i = 0; i <=x; ++i)
	{
		for(int j=0;j<=y;j++){
			cout<<sol[i][j]<<" " ;
		}

		cout<<endl;
	}



	return sol[x][y];
	
}
int main(){
	int cost[4][4]={
		{3,2,5,1},
		{2,3,4,1},
		{1,3,1,4},
		{3,4,2,1},
	};



	int x,y;
	cin>>x>>y;//2 3

	cout<<bottomup(cost,x,y)<<endl;
	// cout<<mincostpath(cost,x,y)<<endl;

	// int sol[100][100];
	// for (int i = 0; i <100; ++i)
	// {
	// 	for(int j=0;j<100;j++){
	// 		sol[i][j]=-1;
	// 	}
	// }

	// cout<<mincostpathtd(cost,x,y,sol)<<endl;

	// for (int i = 0; i <=x; ++i)
	// {
	// 	for(int j=0;j<=y;j++){
	// 		cout<<sol[i][j]<<" " ;
	// 	}

	// 	cout<<endl;
	// }


	return 0;
}