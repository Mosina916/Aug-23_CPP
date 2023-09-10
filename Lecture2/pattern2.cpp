#include<iostream>
using namespace std;
// ******
// *****
// ****
// ***
// **
// *

int main(){
	int tr;
	cin>>tr;

	int r=1;
	while(r<=tr){
	// r-->2

	int i=1;
	while(i<=tr-r+1){
		cout<<'*';
		i=i+1;
	}
	cout<<endl;
	r=r+1;
}

	


	return 0;
}