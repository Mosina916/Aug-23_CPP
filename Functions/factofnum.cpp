#include<iostream>
#include<queue>
using namespace std;
int main(){
	int n;
	cin>>n;//5
	int ans=1;

	// int i=n;

	// while(i>=2){
		// ans=ans*i;//120
	// i--;//1


	// }
	for(int i=n;i>=2;i--){
		ans=ans*i;

	}

	cout<<ans<<endl;
	
	
	

	return 0;
}