#include<iostream> 
using namespace std;
class X{
	
public:
	string name;
	string col;
	int price;

	// X(){
	// 	cout<<"hello"<<endl;
	// }
 
	// default const
	X(){

		
		
	}

	// parametrized constructor
	X(string s,string c,int p){

		cout<<"hi"<<endl;
		// a.name=s;
		name=s;
		col=c;
		price=p;
		
	}


	void printcardet(){
		cout<<name<<endl;
	cout<<col<<endl;
	cout<<price<<endl;

	}

	void takedeatils(){
		string s,c;
		int p;
		cin>>s>>c>>p;
		name=s;
		col=c;
		price=p;



	}

	// dustructor
	~X(){

	}

};

int main(){
	X a("Bmw","Black",100);
	// X b;
	// b=a;


	// a.printcardet();

	X b;

	// b.takedeatils();
	// b.printcardet();
	// // X a;
	// // X b;
	// // a.name="BMW";
	// // a.col="black";
	// // a.price=100;
	// cout<<b.name<<endl;
	// cout<<b.col<<endl;
	// cout<<a.price<<endl;

	return 0;
}