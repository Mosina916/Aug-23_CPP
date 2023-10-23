#include<iostream>
#include<queue>
using namespace std;
int fact(int n){
	int ans=1;
	for(int i=n;i>=2;i--){
		ans=ans*i;

	}
	return ans;
}
int main(){
	int n;
	cin>>n;//
	cout<<fact(n)<<endl;


	return 0;
}