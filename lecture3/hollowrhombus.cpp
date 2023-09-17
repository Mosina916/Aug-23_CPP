#include<iostream>
using namespace std;
int main(){

	int tr;
	cin>>tr;

	// row 1
	// spaces 
	int i=1;
	while(i<=tr-1){
		cout<<' ';
		i=i+1;
	}
	// stars
	int st=1;
	while(st<=tr){
		cout<<'*';
		st=st+1;
	}

	cout<<endl;


	// row no 2 to 4--> 1 to 3
	int r=1;
	while(r<=tr-2){
		// spaces 
		int j=1;
	while(j<=tr-r-1){
		cout<<' ';
		j=j+1;
	}


		// stars
	cout<<'*';


		// spaces
	int k=1;
	while(k<=tr-2){
		cout<<' ';
		k=k+1;
	}

		// stars
	cout<<'*';
	cout<<endl;
	r=r+1;

	}


	// 5th row
	int z=1;
	while(z<=tr){
		cout<<'*';
		z=z+1;
	}

	cout<<endl;



	return 0;
}