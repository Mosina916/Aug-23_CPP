#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=0;
	int p=0;

	while(n>0){
		int rem=n%2;
	ans=rem*pow(10,p)+ans;
	n=n/2;
	p=p+1;

	}


	cout<<ans<<endl;
	


	return 0;
}