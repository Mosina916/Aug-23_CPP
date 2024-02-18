#include<iostream>
using namespace std;
int f(char s1[100],char s2[100],int i,int j){
	// base case
	if(s1[i]=='\0'||s2[j]=='\0'){
		return 0;
	}
	// if(s2[i]=='\0'){
	// 	return 0;
	// }


	// rec case 
	if(s1[i]==s2[j]){
		return 1+f(s1,s2,i+1,j+1);
	}
	else{
		int op1=f(s1,s2,i+1,j);
		int op2=f(s1,s2,i,j+1);

		return max(op1,op2);
	}
}
int main(){
	char s1[100];
	cin.getline(s1,100);
	char s2[100];
	cin.getline(s2,100);

	cout<<f(s1,s2,0,0)<<endl;



	return 0;
}