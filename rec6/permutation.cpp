#include<iostream>
using namespace std;
int c=0;
void permutation(char inp[1000],int i){
	if(inp[i]=='\0'){
		cout<<inp<<endl;
		return;
	}

	for(int j=i;inp[j]!='\0';j++){
	swap(inp[i],inp[j]);
	permutation(inp,i+1);
	swap(inp[i],inp[j]);//backtracking
}


	
}
int main(){
	char inp[1000];
	cin.getline(inp,1000);//ab c
	permutation(inp,0);

	// cout<<c<<endl;
	

	return 0;
}