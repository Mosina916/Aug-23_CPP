#include<iostream>
#include<list>
using namespace std;

class Graph{
	list<int> *arr;
	int N;
	public:
	Graph(int n=5){
		arr=new list<int>[n];
		N=n;

	}

	void addedge(int u,int v,bool birdir=true){//0 1
		arr[u].push_back(v);
		if (birdir)
		{
			arr[v].push_back(u);
		}

	}

	void printgraph(){
		for(int i=0;i<=N-1;i++){
			cout<<i<<"-->";//0

		for(int x:arr[i]){
			cout<<x<<" ";

		}

		cout<<endl;


		}
		
	}

};
int main(){

	Graph g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(2,3);

	g.printgraph();


	return 0;
}