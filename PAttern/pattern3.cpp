#include<iostream>
using namespace std;
		// *
	 //   ***
	 //  *****
	 // *******
  //     *****
  //      ***
  //       *

int main(){
	int tr;
	cin>>tr;//5

	// upper part---------------------------------------------------

	int rowno=1;
	while(rowno<=(tr+1)/2){
	// spaces 
	int spc=1;
	while(spc<=(tr+1)/2-rowno){
		cout<<' ';
		spc=spc+1;

	}
	// stars
	int stc=1;
	while(stc<=2*rowno-1){
		cout<<'*';
		stc=stc+1;

	}

	cout<<endl;
	rowno=rowno+1;

}

//    *
//   ***
//  *****
// *******

// rowno=5
// ---------------------------------------------------
// lower half
rowno=1;
while(rowno<=(tr-1)/2){



	// spaces
	int sp=1;
	while(sp<=rowno){
		cout<<' ';
		sp=sp+1;
	}

	// stars
	int sc=1;
	while(sc<=tr-2*rowno){
		cout<<'*';
		sc=sc+1;
	}
	cout<<endl;
	rowno=rowno+1;

}


	





	return 0;
}