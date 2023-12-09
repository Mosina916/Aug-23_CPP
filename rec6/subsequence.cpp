#include<iostream>
using namespace std;
int c=0;
void subseq(char inp[1000],int i,char out[1000],int j){
	if(inp[i]=='\0'){
		out[j]='\0';
		c++;
		cout<<out<<" "<<endl;
		return;
	}

	// with a
	out[j]=inp[i];
	subseq(inp,i+1,out,j+1);
	// /without a
	subseq(inp,i+1,out,j);
}
int main(){
	char inp[1000];
	cin.getline(inp,1000);//ab c
	char out[1000];
	subseq(inp,0,out,0);

	cout<<c<<endl;
	

	return 0;
}