#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;//13
	int count=0;

	while(n>0){
	if((n&1)==1){
		// count=count+1;
		count++;
	}
	n=n>>1;
}

cout<<count<<endl;

	

	return 0;
}