#include <iostream>
using namespace std;
// #define C endl;
char arr[10][6]={"zero","one","Two","Three","Four","Five","six","seven","Eight","Nine"};
void wordform(int n){//0
	// base case
	if(n==0){
		return;
	}
	// rec case
	wordform(n/10);//Two Zero Four eight
	cout<<arr[n%10]<<" ";

}
int main(){
	int n;
	cin>>n;
	wordform(n);
	cout<< endl;

	return 0;
}