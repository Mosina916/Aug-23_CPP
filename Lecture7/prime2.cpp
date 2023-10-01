#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//9
	int count=0;

	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<i<<" ";
			count=count+1;
		}


	}

	if(count==2){
		cout<<"prime"<<endl;
	}
	else{
		cout<<"not prime"<<endl;

	}
	


	return 0;
}

