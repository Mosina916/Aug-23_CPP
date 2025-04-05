#include<iostream>
#include <map>
using namespace std;

int main(){
	 map<string, string> h;
	h["abc"]="red";
	h["abc"]="ut";


	// // arr[3]=6;
	h.insert(make_pair("hii", "For"));
	// h.insert(make_pair("abc","ut"));
	h.insert(make_pair("pqr","blue"));

	h.insert(make_pair("bac","orange"));
	h.insert(make_pair("lmn","black"));

	// h.insert("cab","black");


	for(pair<string,string> o:h){
		cout<<o.first<<"-->"<<o.second<<endl;


	}

	// h.printhashmap();

	// int arr[5]={6,3,6,2,7};
	// for(int p:arr){
	// 	cout<<p<<" ";
	// }

	cout<<endl;






	return 0;
}