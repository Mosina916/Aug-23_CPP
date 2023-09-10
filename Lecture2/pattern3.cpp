#include<iostream>
using namespace std;
//     *
//    **
//   ***
//  ****
// ***** 

int main(){
	int tr;
	cin>>tr;

	int r=1;
	while(r<=tr){
	// r-->2
		// spaces
		int i=1;
		while(i<=tr-r){
			cout<<' ';
			i=i+1;
		}
		// stars
		int j=1;
	while(j<=r){
		cout<<'*';
		j=j+1;
	}

	
	cout<<endl;
	r=r+1;
}

	


	return 0;
}