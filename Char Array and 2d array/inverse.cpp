#include<iostream>
#include<cmath>
using namespace std;
int main(){

	int n;
	cin>>n;
	int ans=0;
	int place=1;

	while(n>0){
			int ld=n%10;
	ans=ans+place*pow(10,ld-1);
	n=n/10;
	place++;
	

	}
	cout<<ans<<endl;

	
	
	
	return 0;
}