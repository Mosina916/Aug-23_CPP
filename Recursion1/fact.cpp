#include<iostream>
using namespace std;
int fact(int n){//5->
	// b case
	if(n==0){
		return 1;
	}


	// rec case
	return n*fact(n-1);


}
int main(){
	int n;
	cin>>n;
	cout<<fact(n)<<endl;

	return 0;
}