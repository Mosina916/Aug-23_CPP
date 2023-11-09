#include<iostream>
using namespace std;
int length(char arr[100]){
	int c=0;
	for(int i=0;arr[i]!='\0';i++){
		c++;
	}
	return c;

}
void copy(char arr[100],char b[100]){
	int i=0;
	int j=0;

	while(i<=length(arr)){
		b[j]=arr[i];
	i++;
	j++;

	}
	
}
int main(){
	int n;
	cin>>n;

	cin.ignore();
	

	char arr[100];
	cin.getline(arr,100);//board
	char lagest[100];
	copy(arr,lagest);

	int l=length(arr);//5

	for(int i=1;i<=n-1;i++){
		cin.getline(arr,100);//elephant
	if(length(arr)>l){
		copy(arr,lagest);
		l=length(arr);
	}
	}


	cout<<lagest<<endl;
	cout<<l<<endl;
	





	return 0;
}