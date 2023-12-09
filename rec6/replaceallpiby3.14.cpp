#include<iostream>
using namespace std;
string moveallxatend(string s){//
	// base case
	if(s.length()<=1){
		return s;
	}

	

	// rec case
	string a=s.substr(0,2);//"ip"
	if(a=="pi"){
		return "3.14"+moveallxatend(s.substr(2)); //ipd3.143.14fgipg 

	}
	else{
		return s[0]+moveallxatend(s.substr(1));

	}


}

int main(){

	string s;
	getline(cin,s);
	cout<<moveallxatend(s)<<endl;//piipdpipifgipg 
	// 3.14ipd3.143.14fgipg

	// s.substr(0,2);-->pi
	

	return 0;
}