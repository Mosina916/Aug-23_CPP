#include<iostream>
using namespace std;
int convertstringtoint(string s,int l){
	// base case
	if(l==0){
		return 0;
	}

	// rec case
	char ch=s[l-1];//'5''
	int d=ch-'0';//'5'-'0'-->5

	return convertstringtoint(s,l-1)*10+d;//"342"-->3425


}
int main(){
	// "3425"-->3425
	string s;
	getline(cin,s);//"3425"
	int l=s.length();//4

	cout<<convertstringtoint(s,l)<<endl;

	


	return 0;
}