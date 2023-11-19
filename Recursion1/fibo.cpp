#include<iostream>
using namespace std;
// int fibo(int pos){
// 	// b case
// 	if(pos==2){
// 		return 1;
// 	}
// 	if(pos==1){
// 		return 0;
// 	}

// 	// rec case
// 	return fibo(pos-1)+fibo(pos-2);
// }


int fibo(int pos){
	// b case
	if(pos==1){
		return 1;
	}
	if(pos==0){
		return 0;
	}
	// rec case
	return fibo(pos-1)+fibo(pos-2);
}
// no  0 1 1 2 3 5 8 13
// pos 0 1 2 3 4 5 6 7 
int main(){
	int pos;
	cin>>pos;//4
	cout<<fibo(pos)<<endl;
	
	return 0;
}