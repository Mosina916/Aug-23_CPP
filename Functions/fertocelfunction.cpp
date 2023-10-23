#include<iostream>
#include<queue>
using namespace std;
void fertocel(int ini,int fin,int step){
	


	int f=ini;//80
	while(f<=fin){
		int c=(5*1.0/9*1.0)*(f-32);
		cout<<f<<'\t'<<c<<endl;
		f=f+step;


	}
}

int main(){
	int ini,fin,step;
	cin>>ini>>fin>>step;//80 300 20
	fertocel(ini,fin,step);
	
	

	return 0;
}