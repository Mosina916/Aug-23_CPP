#include<iostream>
using namespace std;
void f(int a){
	a=a+30;
	cout<<a<<endl;//40
}
int main(){
	int a=10;
	cout<<a<<endl;//10
	f(a);
	cout<<a<<endl;// 10
	return 0;
}