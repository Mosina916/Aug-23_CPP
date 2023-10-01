#include<iostream>
using namespace std;
int main(){
	int count=0;
	char ch;
	// cin>>ch;//h
	ch=cin.get();
	while(ch!='$'){
		count=count+1;
		// cin>>ch;
		ch=cin.get();

	}
	cout<<count<<endl;


	// // cin>>ch;//h
	// ch=cin.get();
	// while(true){
	// 	if(ch=='$'){
	// 		break;
	// 	}
	// 	count=count+1;
	// 	// cin>>ch;
	// 	ch=cin.get();

	// }
	// cout<<count<<endl;
	return 0;
}