#include<iostream>
using namespace std;
int length(char arr[100]){
	int c=0;
	for(int i=0;arr[i]!='\0';i++){
		c++;
	}
	return c;

}


void append(char a[100],char b[100]){

	int i=0;
	int j=length(a);
	while(i<=length(b)){
		a[j]=b[i];
		i++;
		j++;
	}


}

int main(){
	char a[100];
	cin.getline(a,100);//hi he
	char b[100];
	cin.getline(b,100);//cat
	append(a,b);


	cout<<a<<endl;//hi hecat
	cout<<b<<endl;

	return 0;
}