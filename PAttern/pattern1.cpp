#include<iostream>
using namespace std;
		// *
	 //   ***
	 //  *****
	 // *******

int main(){
	int tr;
	cin>>tr;
	int rowno=1;
	while(rowno<=tr){

		// spaces
		int spc=1;
		while(spc<=tr-rowno){
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


	return 0;
}