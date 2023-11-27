#include <iostream>
using namespace std;
int mult(int a,int b){
	// b vcase
	if(b==0){
		return 0;
	}


	// rec case
	return a+mult(a,b-1);
}
int main(){
	int a,b;//x^n

	cin>>a>>b;
	cout<<mult(a,b)<<endl;


	return 0;
}