#include<iostream>
#include<queue>
using namespace std;

int main(){
	int ini,fin,step;
	cin>>ini>>fin>>step;//80 300 20


	int f=ini;//80
	while(f<=300){
		// int c=(5/9)*(f-32);
		// int c=(5)*(f-32)/9;
		// int c=(5*1.0/9)*(f-32);
		// int c=(5/9*1.0)*(f-32);
		int c=(5*1.0/9*1.0)*(f-32);
		cout<<f<<'\t'<<c<<endl;
		f=f+step;


	}
	




	


	return 0;
}