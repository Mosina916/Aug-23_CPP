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

class hd{
public:
	int h;
	int d;
	hd(){
		h=0;
		d=0;
	}
};
hd diameterinon(node*root){
	hd z;
	if(root==NULL){
		return z;
	}
	hd x=diameterinon(root->left);
	hd y=diameterinon(root->right);
	z.h=max(x.h,y.h)+1;
	int op1=x.d;
	int op2=y.d;
	int op3=x.h+y.h;
	z.d=max(op1,max(op2,op3));
	return z;
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

int main(){

	node*root=buildtree();

	hd q=diameterinon(root);
	cout<<q.h<<endl;
	cout<<q.d<<endl;






	return 0;
}