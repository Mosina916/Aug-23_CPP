#include<iostream>
#include<unordered_map>
using namespace std;
class node{
public:
	char ch;
	bool isterminal;
	unordered_map<char,node*> h;
	node(char c){
		ch=c;
		isterminal=false;
	}


};
class trie{
	node*root;
public:
	trie(){
		root=new node('\0');

	}

	void insert(string s){//"coding"
	node*temp=root;

	for(int i=0;s[i]!='\0';i++){
		char ch=s[i];//'g'
	if(temp->h.count(ch)){
		temp=temp->h[ch];

	}
	else{
		temp->h[ch]=new node(ch);
		temp=temp->h[ch];
	}
	}
	temp->isterminal=true;
	

	}

	bool search(string s){//codi
		node* temp=root;
		for(int i=0;s[i]!='\0';i++){
			char ch=s[i];//'i'
		if(temp->h.count(ch)){
			temp=temp->h[ch];
		}
		else{
			return false;
		}
		}

		return temp->isterminal;
	}
};
int main()
{
	trie t;
	t.insert("cod");
	t.insert("code");
	t.insert("coder");
	t.insert("pen");
	t.insert("pent");
	t.insert("board");
	t.insert("coding");

	if(t.search("coding")){
		cout<<"string is present"<<endl;

	}
	else{
		cout<<"string is not present"<<endl;

	}

	
	return 0;
}