#include <iostream>
using namespace std;
// #define C endl;
char arr[10][6]={"zero","one","Two","Three","Four","Five","six","seven","Eight","Nine"};
void reversewordform(int n){//0
	// base case
	if(n==0){
		return;
	}
	// rec case
	cout<<arr[n%10]<<" ";//Eight four  zero Two
	reversewordform(n/10);

}
int main(){
	int n;
	cin>>n;
	reversewordform(n);
	cout<< endl;
	return 0;
}