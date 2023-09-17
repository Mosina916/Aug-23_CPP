#include<iostream>
using namespace std;
// *
// **
// ***
// ****
// *****

int main(){

	int tr;
	cin>>tr;

	// row no 2 to 4--> 1 to 3
	int r=1;
	while(r<=tr){
	
		int no=1;

		// star
	int k=1;
	while(k<=r){
		cout<<no<<'\t';
		k=k+1;
		no=no+1;
	}

	cout<<endl;
	r=r+1;

	}


	


	return 0;
}