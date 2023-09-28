#include<iostream>
#include<queue>
using namespace std;

int main(){
	int tr;
	cin>>tr;
	int r=1;
	while(r<=tr){
	//  row 
	// spaces
		for(int i=1;i<=tr-r;i=i+1){
			cout<<' ';

		}
	// stars
		int num=r;
		for(int s=1;s<=r;s=s+1){
			cout<<num;
		num=num+1;
		}
	// hash
	int  no=num-2;
	for(int j=1;j<=r-1;j=j+1){
		cout<<no;
		no=no-1;

	}

	r=r+1;
	cout<<endl;

}


	


	return 0;
}