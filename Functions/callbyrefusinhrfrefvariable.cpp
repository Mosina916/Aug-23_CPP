#include<iostream>
using namespace std;
void f(int &n){
	n=n+30;
	cout<<n<<endl;//40
}
int main(){
	int a=10;
	cout<<a<<endl;//10
	f(a);c

	cout<<a<<endl;//40 
	
}