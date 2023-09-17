#include<iostream>
using namespace std;

int main(){
	int tr;
	cin>>tr;

	int r=1;
	while(r<=tr-1){
	// kiski 1 row k lye 
	// stars
		int no=1;
	int st=1;
	while(st<=r){
		cout<<no<<'\t';
		st=st+1;
		no=no+1;
	}
	// spaces
	int sp=1;
	while(sp<=(2*tr-1)-(2*r)){
		cout<<' '<<'\t';
		sp=sp+1;
	}
	// stars
	int s=1;
	int num=r;
	while(s<=r){
		cout<<num<<'\t';
		s=s+1;
		num=num-1;
	}
	cout<<endl;
	r=r+1;


}


// last row
	// int x=1;
	// while(x<=2*tr-1){
	// 	cout<<'*'<<'\t';
	// 	x=x+1;
	// }

	// cout<<endl;
	// 1 TO 4
	int c=1;
	int noo=1;
	while(c<=tr){
		cout<<noo<<'\t';
		c=c+1;
		noo=noo+1;

	}
	// 3 to 1

	int co=1;
	int numb=tr-1;
	while(co<=tr-1){
		cout<<numb<<'\t';
		co=co+1;
		numb=numb-1;

	}


	cout<<endl;






	


	return 0;
}