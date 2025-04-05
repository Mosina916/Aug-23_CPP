#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
template<typename T>
class Graph{

	// unordered_map<string,list<string> > h;
	// unordered_map<int,list<int> > h;
	unordered_map<T,list<T> > h;

public:



	// void addedge(string u,string v,bool birdir=false){
	// void addedge(int u,int v,bool birdir=true){
	void addedge(T u,T v,bool birdir=false){
		h[u].push_back(v);
		if(birdir==true){
			h[v].push_back(u);

		}
	


	}


	void printgraph(){

		for(auto s:h){
			cout<<s.first<<"  -->  ";
			for(auto p:s.second){
				cout<<p<<" ";

			}
			cout<<endl;
		}
		
}


};
int main(){

	Graph<string>g;
	g.addedge("trump","modi",true);
	g.addedge("putin","modi");
	g.addedge("putin","pope");
	g.addedge("putin","trump");
	g.addedge("yogi","modi",true);
	g.addedge("prabhu","modi");
	g.addedge("yogi","prabhu");
	g.addedge("pope","");


	// g.printgraph();

	// g.addedge(0,1);
	// g.addedge(0,4);
	
	// g.addedge(1,4);
	// g.addedge(4,3);
	// g.addedge(1,3);
	// g.addedge(1,2);
	// g.addedge(2,3);

	g.printgraph();


	return 0;
}