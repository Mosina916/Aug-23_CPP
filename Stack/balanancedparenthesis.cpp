#include<iostream>
#include<stack>
using namespace std;
bool isbalaned(char arr[]){//({[{()}]}{()})
	stack<char> s;
	for(int i=0;arr[i]!='\0';i++){
	char ch=arr[i];//}
	if(ch=='(' ||ch=='{' ||ch=='['){
		s.push(ch);
	}
	else if(ch==')'){
		if(!s.empty() and s.top()=='('){
			s.pop();
		}
		else{
			return false;

		}

	}
	else if(ch=='}'){
		if(!s.empty() and s.top()=='{'){
			s.pop();
		}
		else{
			return false;

		}

	}
	else if(ch==']'){
		if(!s.empty() and s.top()=='['){
			s.pop();
		}
		else{
			return false;

		}

	}


}
return s.empty();




}
int main(){
	char arr[]="({[{)()}]}{()})";
	if(isbalaned(arr)==true){
		cout<<"balanced"<<endl;
	}
	else{
		cout<<"not balanced"<<endl;
	}
	return 0;
}