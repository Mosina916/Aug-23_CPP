#include<iostream>
#include <set>
using namespace std;

int main(){
	 set<int> s;
	 s.insert(1);

	  s.insert(10);

	   s.insert(11);
	    s.insert(1);
	     s.insert(101);

	      s.insert(11);


	      for(auto x:s){
	      	cout<<x<<" ";
	      }

	      cout<<endl;







	return 0;
}