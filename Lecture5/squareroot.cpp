#include<iostream>
#include<queue>
using namespace std;
// 3.31662479036-->11
int main(){
	int n;
	cin>>n;//9
	int i=0;

	while(i*i<=n){
		i=i+1;//i++;
	}
	cout<<i-1<<endl;

	return 0;
}