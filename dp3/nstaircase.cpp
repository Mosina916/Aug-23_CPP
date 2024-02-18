#include <iostream>
using namespace std;
int nstircase(int n,int k){//2
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	int ans=0;
	for (int i = 1; i <=k; ++i)
	{
		ans=ans+nstircase(n-i,k);
	}
	return ans;
	// return nstircase(n-1)+nstircase(n-2)+nstircase(n-3);
}

int main(){
	int n;
	cin>>n;//5
	int k;
	cin>>k;

	// at max rahul can jump 3
	cout<<nstircase(n,k)<<endl;

	return 0;
}