#include<iostream>
using namespace std;
void incprint(int n){
	if(n==0){
		return;
	}
	
	incprint(n-1);
	cout<<n<<" ";
}
int main(){
	int n;
	cin>>n;
	incprint(n);
	cout<<endl;



	return 0;
}