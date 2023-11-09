#include<iostream>
using namespace std;
int length(char arr[100]){
	int c=0;
	for(int i=0;arr[i]!='\0';i++){
		c++;
	}
	return c;

}



void reverse(char arr[100]){
	int i=0;
	int j=length(arr)-1;

	while(i<j){
		swap(arr[i],arr[j]);
	i++;
	j--;

	}
	

}


int main(){
	char arr[100];
	cin.getline(arr,100);
	reverse(arr);

	cout<<arr<<endl;
	

	return 0;
}