#include<iostream>
#include<queue>
using namespace std;
// 3.31662479036-->11
int main(){
	int n,decp;
	cin>>n>>decp;//11 3 

	float step=1;
	 float i=0;

	 int co=1;
	 while(co<=decp+1){
	 	while(i*i<=n){
		i=i+step;//i++;
	}

	i=i-step;
	step=step/10;//0.0001


	 	co=co+1;
	 }

	 cout<<i<<endl;




	
	


	return 0;
}