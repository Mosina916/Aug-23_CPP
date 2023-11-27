#include <iostream>
#include <string>
using namespace std;
int main(){
	// rotatebyn;

	// codingblocks n char shift

	// n=3
	// ckscodingblo


	string s1;
	getline(cin,s1);//codingblocks

	int n;
	cin>>n;//3

	int l=s1.length();//12

	string x=s1.substr(l-n);//cks
	string y=s1.substr(0,l-n);//codingblo
	string z=x+y;
	cout<<z<<endl;





	


	
	return 0;
}