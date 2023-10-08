#include<iostream>
using namespace std;
int main(){
	
	int arr[1000];
	int n;
	cin>>n;//5
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}//3 1 4 6 2
	int key;
	cin>>key;//6
	int i;

	for(i=0;i<=n-1;i++){
		if(arr[i]==key){
		cout<<key<<"is present at index "<<i<<endl;
		break;

	}

	}
	if(i==n){
		cout<<"key is not present"<<endl;
	}
	


	



	return 0;
}