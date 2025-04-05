#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int x){//6
	if(s.empty()){
		s.push(x);
		return;

	}

	int p=s.top();//3 5 7 2
	s.pop();
	insertatbottom(s,x);
	s.push(p);


}
void reverse(stack<int> &s){
	if(s.empty()){
		return;
	}

	int x=s.top();//6
	s.pop();
	reverse(s);
	insertatbottom(s,x);

}
int main(){
	stack<int> s;
	int n;
	cin>>n;//5
	for (int i = 0; i <n; ++i)
	{
		int data;
		cin>>data;//3 5 7 2 6
		s.push(data);
	}


	reverse(s);

	while(!s.empty()){
	cout<<s.top()<<' ';
	s.pop();
}

cout<<endl;





}