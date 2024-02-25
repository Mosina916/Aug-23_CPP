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

	// void bfs(U src){//0
	// 	queue<U> q;
	// 	q.push(src);//0
	// 	unordered_map<U,bool> visited;
	// 	visited[src]=true;
	// 	while(!q.empty()){
	// 		U x=q.front();//1
	// 	q.pop();
	// 	cout<<x<<" ";//0 1
	// 	for(auto p:h[x]){//1
	// 		if(!visited[p]){
	// 			q.push(p);
	// 			visited[p]=true;
	// 		}

	// 	}

	// 	}

	// // 	//0 1 4 3 2-
		



	// // }


	void bfs(U src){//0
		queue<U> q;
		q.push(src);//0
		unordered_map<U,bool> visited;
		unordered_map<U,int> distance;
		distance[src]=0;
		visited[src]=true;
		while(!q.empty()){
			U x=q.front();//1
		q.pop();
		cout<<x<<" ";//0
		for(auto p:h[x]){//1
			if(!visited[p]){
				q.push(p);
				visited[p]=true;
				distance[p]=distance[x]+1;
			}

		}

		}



		for(auto l:distance){
			cout<<"distance of "<<src<<" to "<<l.first<<" is "<<l.second<<endl;
		}


	}



};
int main(){

	// Graph g;
	// Graph<string>g;
	// g.addedge("Trump","modi",true);
	// g.addedge("putin","Trump");
	// g.addedge("putin","modi");
	// g.addedge("putin","pope");
	// g.addedge("prabhu","modi");
	// g.addedge("modi","yogi",true);
	// g.addedge("yogi","prabhu");
	// g.addedge("pope","");
	Graph<int>g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(2,3);
	
	g.printgraph();

	g.bfs(0);



	return 0;
}