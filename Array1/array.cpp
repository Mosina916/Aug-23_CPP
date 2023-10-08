#include<iostream>
using namespace std;
int main(){
	// int a=50,b=40,c=34,d=23,e=89;
	// int a,b,c,d,e;
	// cin>>a>>b>>c;

	// cout<<a<<endl;
	
	// int s1,s2,s3;

	// datatype nameofarr[size];
	int student[5];

	// access a bucket
	// arrayname[index];
	// student[0]=50;
	// student[1]=40;
	// student[2]=34;
	// student[3]=89;
	// student[4]=23;
	// used to take i/p
	for(int i=0;i<=4;i++){
		cin>>student[i];
	}

	// cin>>student[0];
	// cin>>student[1];
	// cin>>student[2];
	// cin>>student[3];
	// cin>>student[4];
// o/p
	for(int i=0;i<=4;i++){
		cout<<student[i]<<endl;
	}


	// cout<<student[0]<<endl;
	// cout<<student[1]<<endl;
	// cout<<student[2]<<endl;
	// cout<<student[3]<<endl;
	// cout<<student[4]<<endl;



	return 0;
}