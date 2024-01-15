#include<iostream>
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

void preorderprint(node*root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	preorderprint(root->left);
	preorderprint(root->right);

}
void inorderprint(node*root){
	if(root==NULL){
		return;
	}

	
	inorderprint(root->left);
	cout<<root->data<<" ";
	inorderprint(root->right);

}

void postorderprint(node*root){
	if(root==NULL){
		return;
	}

	
	postorderprint(root->left);
	postorderprint(root->right);
	cout<<root->data<<" ";

}

int countnodesintree(node*root){
	if(root==NULL){
		return 0;
	}

	return countnodesintree(root->left)+countnodesintree(root->right)+1;

}

int datasumnodesintree(node*root){
	if(root==NULL){
		return 0;
	}

	return datasumnodesintree(root->left)+datasumnodesintree(root->right)+root->data;

}





int main(){
	node*root=buildtree();
	preorderprint(root);

	cout<<endl;

	inorderprint(root);
	cout<<endl;
	postorderprint(root);
	cout<<endl;

	cout<<"count of nodes is : "<<countnodesintree(root)<<endl;
	cout<<"sum of nodes is : "<<datasumnodesintree(root)<<endl;





	return 0;
}