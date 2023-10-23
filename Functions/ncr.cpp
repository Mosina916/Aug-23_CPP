#include<iostream>
using namespace std;
// int fact(int n){
// 	int ans=1;
// 	for(int i=n;i>=2;i--){
// 		ans=ans*i;

// 	}
// 	return ans;
// }
int fact(int n);//forawrd decleartion
int ncr(int n,int r){
	int ans=fact(n)/(fact(r)*fact(n-r));
	return ans;
}

int main(){
	int n,r;
	cin>>n>>r;//
	cout<<ncr(n,r)<<endl;
	return 0;
}
int fact(int n){
	int ans=1;
	for(int i=n;i>=2;i--){
		ans=ans*i;

	}
	return ans;
}