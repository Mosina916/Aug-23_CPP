#include<iostream>
using namespace std;
int main(){
	// int arr[1000000];

	 int arr[100];
	 int n;
	 cin>>n;//7
	 for (int i = 0; i <=n-1; ++i)
	 {
	 	cin>>arr[i];//2 4 1 6 14 6 7 

	 }

	 // sol
	 int abhtakkalargest=arr[0];//2

	 for(int i=1;i<=n-1;i++){
	 	 if(arr[i]>abhtakkalargest){//7>14
	 	abhtakkalargest=arr[i];//14

	 }

	 }

	 cout<<abhtakkalargest<<endl;
	
	 


	

	return 0;
}