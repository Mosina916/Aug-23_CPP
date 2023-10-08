#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;//5
	if(n%2==0){
		// even
		int sv=n-1;//9
		while(sv>=1){
			cout<<sv<<endl;//9 7 5 3 1
		sv=sv-2;//-1

		}
		sv=2;
		while(sv<=n){

			cout<<sv<<endl;//2 4 6 8 10
		sv=sv+2;
		}
	}
	else{
		// odd
		int sv=n;
		while(sv>=1){
			cout<<sv<<endl;//5 3 1
		sv=sv-2;//-1

		}
		sv=2;
		while(sv<=n-1){
			cout<<sv<<endl;//2 4
		sv=sv+2;
		

		}
		

	}
	return 0;
}