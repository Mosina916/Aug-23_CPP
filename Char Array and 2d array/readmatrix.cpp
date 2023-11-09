#include<iostream>
using namespace std;

bool findinmat(int arr[][4],int r,int c,int key){
	for(int i=0;i<=r-1;i++){
		for(int j=0;j<=c-1;j++){
		if(arr[i][j]==key){
			cout<<"key is present at index "<<i<<" , "<<j<<endl;
			return true;
	}

	}

	}

	return false;
	
	
}
int main(){
	int arr[][4]={
		{3,5,9,16},
		{4,5,19,20},
		{23,2,0,9}
	};

	int key;
	cin>>key;//19

	if(findinmat(arr,3,4,key)==false){
		cout<<"key is not present"<<endl;
	}
	
	
	
	return 0;
}