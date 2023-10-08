#include<iostream>
using namespace std;
int main(){
	
	int student[100];
	int n;
	cin>>n;//5

	for(int i=0;i<=n-1;i++){
		cin>>student[i];
	}

	for(int i=0;i<=n-1;i++){
		cout<<student[i]<<" ";
	}

	cout<<endl;





	return 0;
}