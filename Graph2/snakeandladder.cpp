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
	void addedge(U u,U v,bool birdi=false){
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
	int distancefromsrctodest(U src,U dest){//0
		queue<U> q;
		q.push(src);//0
		unordered_map<U,bool> visited;
		unordered_map<U,int> distance;

		unordered_map<U,U> parent;
		parent[src]=src;
		distance[src]=0;
		visited[src]=true;
		while(!q.empty()){
			U x=q.front();//1
		q.pop();
		// cout<<x<<" ";//0
		for(auto p:h[x]){//1
			if(!visited[p]){
				q.push(p);
				visited[p]=true;
				distance[p]=distance[x]+1;
				parent[p]=x;
				}
		}

		}

		// path print
		U l=dest;//2
		while(l!=src){
			cout<<l<<"<--";
		l=parent[l];//0

		}

		cout<<src<<endl;
		


		return distance[dest];
	}



};
int main(){
	int board[100]={0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	

	Graph<int> g;


	for(int src=0;src<=35;src++){
		for(int dice=1;dice<=6;dice++){
				int dest=src+dice+board[src+dice];
			g.addedge(src,dest);

		}




	}

	int dice;

	int src=0;

	while(true){
		cin>>dice;//2
	int dest=src+dice+board[src+dice];
	if(dest>36){
		cout<<"zyada input de rahe"<<endl;
		continue;
	}
	if(dest==36){

		cout<<"yey i win the game "<<dest<<endl;
		break;
		
	}
	cout<<"currently i am at "<<dest<<endl;

	src=dest;


	}
	


	cout<<g.distancefromsrctodest(0,36)<<endl;
	

	


	return 0;
}