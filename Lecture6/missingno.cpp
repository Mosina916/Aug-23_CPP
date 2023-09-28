#include<iostream>
#include<cmath>
using namespace std;
// int -->-2^31  to 2^63-1-->10^9
int main(){
	int n;
	cin>>n;//10^12
	
	long long int ts=n*(n+1)/2;

	int no;

	int i=1;

	while(i<=n-1){
		cin>>no;//4
	ts=ts-no;//3
	i=i+1;

	}


	cout<<ts<<endl;
	
	

	return 0;
}