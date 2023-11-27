#include <iostream>
using namespace std;
int xnpow(int x,int n){
	// b vcase
	if(n==0){
		return 1;
	}


	// rec case
	return x*xnpow(x,n-1);
}
int main(){
	int x,n;//x^n

	cin>>x>>n;
	cout<<xnpow(x,n)<<endl;


	return 0;
}