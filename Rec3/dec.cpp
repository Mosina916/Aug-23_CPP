#include<iostream>
using namespace std;
void decprint(int n){
	if(n==0){
		return;
	}
	cout<<n<<" ";
	decprint(n-1);
}
int main(){
	int n;
	cin>>n;
	decprint(n);
	cout<<endl;



	return 0;
}