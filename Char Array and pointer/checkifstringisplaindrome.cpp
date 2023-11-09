#include<iostream>
using namespace std;
int length(char arr[100]){
	int c=0;
	for(int i=0;arr[i]!='\0';i++){
		c++;
	}
	return c;

}

bool palindrome(char arr[100]){
	int i=0;
	int j=length(arr)-1;

	while(i<j){
		if(arr[i]==arr[j]){
		i++;
		j--;

	}

	else{
		return false;
	}

	}

	return true;
	

}


int main(){
	char arr[100];
	cin.getline(arr,100);
	

	// cout<<length(arr)<<endl;
	// if(palindrome(arr)){
	// 	cout<<"palindrome"<<endl;
	// }
	// else{
	// 	cout<<"Not palindrome"<<endl;

	// }

	

	return 0;
}