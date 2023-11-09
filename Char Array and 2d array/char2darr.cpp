#include<iostream>
using namespace std;
int main(){
	char arr[][4]={
		{'A','B','C','\0'},//--> "ABC"
		{'D','A','R','\0'},
		{'E','R','T','\0'}
	};

	

	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;

	}

	// char arr[][3]={
	// 	"ABC",
	// 	"DAR",
	// 	"ERT"
	// };





	cout<<&arr[0][0]<<endl;

	cout<<&arr[1][0]<<endl;
	cout<<&arr[2][0]<<endl;

	
	
	
	return 0;
}