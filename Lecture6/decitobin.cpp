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


	// cout<<ans<<endl;
	int count=0;


	// ans-->1101

	while(ans>0){
		int ld=ans%10;//1
	if(ld==1){
		count=count+1;//3

	}
	ans=ans/10;//0

	}

	cout<<count<<endl;
	
	


	return 0;
}