#include<iostream>
using namespace std;
int length(char arr[100]){
	int c=0;
	for(int i=0;arr[i]!='\0';i++){
		c++;
	}
	return c;

}

void rotate(char arr[100],int n){
	int l=length(arr);


	int i=length(arr);
	while(i>=0){
		arr[i+n]=arr[i];
		i--;
	}

	int k=0,p=l;

	for (int i = 1; i <=n ;i++)
	{
		arr[k++]=arr[p++];
		
	}
	arr[l]='\0';
}

int main(){
	int n;
	cin>>n;
	cin.ignore();



	char arr[100];
	cin.getline(arr,100);
	n=n%length(arr);

	rotate(arr,n);

	cout<<arr<<endl;
	

	return 0;
}