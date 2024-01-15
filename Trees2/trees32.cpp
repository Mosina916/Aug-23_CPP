#include<iostream>
#include<queue>
using namespace std;

// i/p 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1 
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

node* buildtree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}

	node*root=new node(d);
	root->left=buildtree();
	root->right=buildtree();
	return root;
}

int heightoftree(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// rec case
	return max(heightoftree(root->left),heightoftree(root->right))+1;
}


void levelwise(node*root){
	queue<node*> q;
	q.push(root);//8
	q.push(NULL);//NULL

	while(!q.empty()){
		node*x=q.front();//null
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);

		}
		
	}
	else{
		cout<<x->data<<" ";
	if(x->left!=NULL){
		q.push(x->left);
	}
	if(x->right!=NULL){
		q.push(x->right);
	}

	}

	}
}


int pre[]={8,10,1,6,4,7,3,14,13};
int inord[]={1,10,4,6,7,8,3,13,14};
int i=0;//4
node* buildtreefrompreinord(int s,int e){
	// base case
	if(s>e){
		return NULL;
	}
	// rec case
	int d=pre[i];//4
	i++;
	int k;
	for(int l=s;l<=e;l++){
		if(inord[l]==d){
			k=l;//5
			break;
		}
	}
	// k//5
	node*root=new node(d);//
	root->left=buildtreefrompreinord(s,k-1);
	root->right=buildtreefrompreinord(k+1,e);
	return root;
}


// 8 3 14 13 10  6 7 4 1-->Preorder
int main(){
	int n=sizeof(pre)/sizeof(int);//9

	node*root=buildtreefrompreinord(0,n-1);

	levelwise(root);
	
	




	return 0;
}