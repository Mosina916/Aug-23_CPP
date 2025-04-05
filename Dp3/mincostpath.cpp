#include<iostream>
#include<climits>
using namespace std;
int mincostpath(int cost[4][5],int x,int y){
	if(x==0 and y==0){
		return cost[x][y];
	}
	if(x<0||y<0){
		return INT_MAX;
	}
	


	return min(mincostpath(cost,x-1,y),mincostpath(cost,x,y-1))+cost[x][y];

}

int mincostpathtd(int cost[4][5],int x,int y,int sol[100][100]){
	if(x==0 and y==0){
		return sol[x][y]=cost[x][y];
	}
	if(x<0||y<0){
		return INT_MAX;
	}
	if(sol[x][y]!=-1){
		return sol[x][y];
	}


	return sol[x][y]=min(mincostpathtd(cost,x-1,y,sol),mincostpathtd(cost,x,y-1,sol))+cost[x][y];

}


int bu(int cost[4][5],int x,int y){
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
			cout<<sol[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;



	return sol[x][y];
}
int main(){
	int cost[4][5]={
		{4,3,1,2,1},
		{1,2,4,5,1},
		{3,6,3,4,2},
		{2,5,3,4,7}
	};
	int x,y;
	cin>>x>>y;//2 3
	cout<<mincostpath(cost,x,y)<<endl;

	int sol[100][100];
	// memset
	for (int i = 0; i <100; ++i)
	{
		for(int j=0;j<100;j++){
			sol[i][j]=-1;
		}
	}

	cout<<mincostpathtd(cost,x,y,sol)<<endl;



	for (int i = 0; i <=x; ++i)
	{
		for(int j=0;j<=y;j++){
			cout<<sol[i][j]<<" ";
		}
		cout<<endl;
	}

	cout<<bu(cost,x,y)<<endl;


	return 0;
}