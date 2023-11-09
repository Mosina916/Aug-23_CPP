#include<iostream>
using namespace std;
int length(char arr[100]){
	int c=0;
	for(int i=0;arr[i]!='\0';i++){
		c++;
	}
	return c;

}
int main(){
	char arr[100];
	cin.getline(arr,100);
	cout<<length(arr)<<endl;

	

	return 0;
}