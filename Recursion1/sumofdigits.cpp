#include<iostream>
using namespace std;
int sumofdigit(int num){//0
	// b case
	if(num==0){
		return 0;
	}
	

	// rec case
	// sumofdigit(num/10)+num%10;
	return num%10+sumofdigit(num/10);
	

}
int main(){
	int n;
	cin>>n;
	cout<<sumofdigit(n)<<endl;

	return 0;
}