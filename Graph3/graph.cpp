#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
using namespace std;
template<typename U>
class Graph{
	// unordered_map<string,list<string> > h;
	// unordered_map<int,list<int> > h;
	unordered_map<U,list<U> > h;
public:
	// void addedge(string u,string v,bool birdi=false){
	void addedge(U u,U v,bool birdi=true){
		h[u].push_back(v);
		if(birdi){
			h[v].push_back(u);

		}
	}

	void printgraph(){
		for(auto x: h){
			cout<<x.first<<" -->";
			for(auto p:x.second){
				cout<<p<<" ";
			}

			cout<<endl;
		}
	}
	//0 1 4 3 2

	// void dfs(U src,unordered_map<int,bool> &visited){
	// 	cout<<src<<" ";//0
	// 	visited[src]=true;
	// 	for(auto x:h[src]){
	// 		if(!visited[x]){
	// 			dfs(x,visited);
	// 		}
	// 	}


	// }

	void dfstc(U src,unordered_map<int,bool> &visited){
		cout<<src<<" ";//0
		visited[src]=true;
		for(auto x:h[src]){
			if(!visited[x]){
				dfstc(x,visited);
			}
		}


	}


	int totalcomp(U src){
		unordered_map<int,bool> visited;
		dfstc(src,visited);
		int compco=1;
		for(auto p:h){
			if(!visited[p.first]){
			dfstc(p.first,visited);
			compco++;
		}


		}
		cout<<endl;
		return compco;

		
	}






};
int main(){
	Graph<int>g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(2,3);

	g.addedge(300,400);
	g.addedge(300,600);
	g.addedge(500,600);
	g.addedge(500,400);

	g.addedge(101,111);
	g.addedge(102,111);


	// g.printgraph();
// unordered_map<int,bool> visited;

	int x=g.totalcomp(0);
	cout<<"total components are "<<x<<endl;
	
	


	return 0;
}