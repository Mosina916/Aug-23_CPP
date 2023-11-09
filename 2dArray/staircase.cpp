#include<iostream>
using namespace std;
bool staircase(int arr[4][4],int r,int c,int key){
	int i=0;
	int j=c-1;
	while(i<=r-1 and j>=0){
		if(arr[i][j]==key){
			cout<<"key is present at index "<<i<<" "<<j<<endl;
			return true;


		}
		else if(arr[i][j]>key){
			j--;


		}
		else{
			i++;
		}
	}

	return false;
}
int main(){
	int arr[4][4]={
		{1,3,4,5},
		{2,6,7,8},
		{3,9,13,14},
		{5,10,16,32}
	};

	int r=4,c=4;
	int key;
	cin>>key;
	if(staircase(arr,r,c,key)==false){
		cout<<"key is not present"<<endl;

	}




	return 0;
}