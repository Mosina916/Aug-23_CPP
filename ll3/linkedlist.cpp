#include<iostream>
#include<stack>
using namespace std;
void generateparenthesis(int n,int oc,int cc,string s){
	if(cc==n){
		cout<<s<<endl;
		return;
	}

	if(cc<oc){
		generateparenthesis(n,oc,cc+1,s+')');

	}
	if(oc<n){
		generateparenthesis(n,oc+1,cc,s+'(');
	}

	
}

int main(){
	



}