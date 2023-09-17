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
	int i=1;
	while(i<=tr-r){
		cout<<' ';
		i=i+1;
	}

	// stars
	int num=1;
	int s=1;
	while(s<=r){
		cout<<num;
		s=s+1;
		num=num+1;
	}


	// hash
	int  no=r-1;
	int j=1;
	while(j<=r-1){
		cout<<no;
		j=j+1;
		no=no-1;
	}

	r=r+1;
	cout<<endl;

}
	


	return 0;
}