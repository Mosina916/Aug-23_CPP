#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	int arr[100000];
	int ans=0;
	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
		ans=ans^arr[i];
	}

	// ans-->12
	int no=ans;//12
	int pos=1;
	while(no!=0){
		if((no&1)==1){
			break;
		}
		no=no>>1;
		pos++;
	}
	// pos=3;
	int mask=1<<(pos-1);//4-0->100
	int cat1=0;
	for(int j=0;j<n;j++){
		if((arr[j]&mask)!=0){
			cat1=cat1^arr[j];//0^6-->6^4^6-->4
		}
	}
	// cat1-->4

	int no2=ans^cat1;//8

	cout<<min(cat1,no2)<<" "<<max(cat1,no2)<<endl;

	return 0;
}