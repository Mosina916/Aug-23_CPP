#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;

	// 2 1 4 3 6 8 9 10 7 

	// 1 to 10 
	// 1^2^3^4^5^6^7^8^9^10

	int ans=0;
	int i=1;
	while(i<=n){
		ans=ans^i;//1^2^3^4^5^6^7^8^9^10
	i++;//2

	}

	// 2 1 4 3 6 8 9 10 7 
	int no;
	int c=1;
	while(c<=n-1){
		cin>>no;
	ans=ans^no;
	c=c+1;


	}

	cout<<ans<<endl;
	
	





	
	return 0;
}