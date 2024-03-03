#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
using namespace std;
template<typename U>
class Graph{
	unordered_map<U,list<pair<U,int> > > h;
public:
	// void addedge(string u,string v,bool birdi=false){
	void addedge(U u,U v,int dist,bool birdi=true){
		h[u].push_back(make_pair(v,dist));
		if(birdi){
			h[v].push_back(make_pair(u,dist));

		}
	}

	void printgraph(){
		for(auto x: h){

			cout<<x.first<<" --> ";
			for(auto d:x.second){
				cout<<"("<<d.first<<","<<d.second<<") ";
			}

			cout<<endl;
			
		}
	}





};
int main(){
	Graph< string> g;
	g.addedge("Amritsar","Agra",1);
	g.addedge("Amritsar","jaipur",4);
	g.addedge("jaipur","delhi",2);
	g.addedge("jaipur","mumbai",8);
	g.addedge("Agra","delhi",1);
	g.addedge("Agra","bhopal",2);
	g.addedge("bhopal","mumbai",3);
	g.printgraph();

	return 0;
}