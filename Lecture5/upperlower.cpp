#include<iostream>
using namespace std;
// A-->65
// B-->66
// C-->67
// D-->68
// Z-->90
// 'a'-->97
// 'z'-->122
int main(){
	char ch;
	cin>>ch;//'b'
	// implicit tc 
	// if(ch>='A' and ch<='Z'){
	// 	cout<<"upper case"<<endl;
	// }
	// else if(ch>='a' and ch<='z'){
	// 	cout<<"lower case"<<endl;

	// }
	// else{
	// 	cout<<"some other character"<<endl;
	// }


	// if(ch>=65 and ch<=90){
	// 	cout<<"upper case"<<endl;
	// }
	// else if(ch>=97 and ch<=122){
	// 	cout<<"lower case"<<endl;

	// }
	// else{
	// 	cout<<"some other character"<<endl;
	// }
	// ch-->'b'

	if(isupper(ch)){
		cout<<"upper case"<<endl;
	}
	else if(islower(ch)){
		cout<<"lower case"<<endl;

	}
	else{
		cout<<"some other character"<<endl;
	}



	return 0;
}