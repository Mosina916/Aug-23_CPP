#include<iostream>
#include<list>
using namespace std;
class Graph{

	list<int>*arr;
	int n;
public:
	Graph(int s){
		arr=new list<int>[s];
		n=s;

	}
	void addedge(int u,int v,bool birdir=true){
		arr[u].push_back(v);
		if(birdir==true){
			arr[v].push_back(u);
		}



	}


	void printgraph(){
		for(int i=0;i<n;i++){
		cout<<i<<"  -->  ";
		for(auto x:arr[i]){//1 4 
			cout<<x<<" ";
		}
		cout<<endl;

	}
}


};
int main(){

	Graph g(5);
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