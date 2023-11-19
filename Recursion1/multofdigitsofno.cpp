#include<iostream>
using namespace std;

int multofdigit(int num){//0
	// b case
	if(num==0){
		return 1;
	}
	// rec case
	// sumofdigit(num/10)*num%10;
	return num%10*multofdigit(num/10);
	

}
int main(){
	int n;
	cin>>n;
	cout<<multofdigit(n)<<endl;

	return 0;
}