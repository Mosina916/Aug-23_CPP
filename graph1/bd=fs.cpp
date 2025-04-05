#include<iostream>
#include<list>
#include<queue>
#include<unordered_map>
using namespace std;
template<typename T>
class Graph{
	unordered_map<T,list<T> > h;

public:


	void addedge(T u,T v,bool birdir=true){
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

	// void bfs(T src){//0
	// 	queue<T> q;
	// 	q.push(src);
	// 	unordered_map<T,bool> visited;
	// 	visited[src]=true;
	// 	while(!q.empty()){

	// 	T x=q.front();//2
	// 	q.pop();
	// 	cout<<x<<' ';
	// 	for(auto p:h[x]){
	// 		if(!visited[p]){
	// 			q.push(p);
	// 			visited[p]=true;

	// 		}

	// 	}
	// }

	// }


	void shortestdist(T src){//0
		queue<T> q;
		q.push(src);
		unordered_map<T,bool> visited;
		visited[src]=true;
		unordered_map<T,int> distance;
		distance[src]=0;

		while(!q.empty()){

		T x=q.front();//2
		q.pop();
		// cout<<x<<' ';
		for(auto p:h[x]){
			if(!visited[p]){
				q.push(p);
				visited[p]=true;
				distance[p]=distance[x]+1;

			}

		}
	}


	for(auto g:distance){
		cout<<"distance of "<<g.first<<" from "<<src<<" is "<<g.second<<endl;
	}

	}


};
int main(){

	// Graph<string>g;

	// g.addedge("trump","modi",true);
	// g.addedge("putin","modi");
	// g.addedge("putin","pope");
	// g.addedge("putin","trump");
	// g.addedge("yogi","modi",true);
	// g.addedge("prabhu","modi");
	// g.addedge("yogi","prabhu");
	// g.addedge("pope","");
	
		Graph<int>g;
	// g.printgraph();
	g.addedge(0,4);
	g.addedge(0,1);
	

	
	
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(2,3);

	// g.printgraph();

	g.shortestdist(0);


	return 0;
}