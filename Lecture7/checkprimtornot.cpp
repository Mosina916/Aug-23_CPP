#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;//9
	int i=2;

	
	int p=sqrt(n);

	while(i<=p){
		if(n%i==0){
			cout<<i<<endl;
			cout<<"not prime"<<endl;
			break;

	}
	i++;

	}

	if(i==p+1){
		cout<<"prime"<<endl;
	}


	return 0;
}

