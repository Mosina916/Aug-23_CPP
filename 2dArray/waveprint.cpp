#include<iostream>
using namespace std;
void waveprint(int arr[4][4],int r,int c){
	for(int colno=0;colno<=c-1;colno++){
		if(colno%2==0){
		// downward
		for(int rn=0;rn<=r-1;rn++){
			cout<<arr[rn][colno]<<" ";

		}

		

	}
	else{
		// upward
		for(int rn=r-1;rn>=0;rn--){
			cout<<arr[rn][colno]<<" ";

		}
		 
	}

	}
	

	
}
int main(){
	int arr[4][4]={
		{1,3,4,5},
		{2,6,7,8},
		{3,9,13,14},
		{5,10,16,32}
	};

	int r=4,c=4;
	waveprint(arr,r,c);
	




	return 0;
}