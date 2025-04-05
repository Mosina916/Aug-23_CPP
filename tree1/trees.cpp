#include<iostream>
using namespace std;
class node{
public:
	int d;
	node*left;
	node*right;
	node(int data){
		d=data;
		right=NULL;
		left=NULL;

	}
};


node* buildtree(){

	int d;
	cin>>d;//8
	if(d==-1){
		return NULL;
	}
	node*root=new node(d);
	root->left=buildtree();//lst
	root->right=buildtree();//rst
	return root;
}

void preorderprint(node*root){
	if(root==NULL){
		return;
	}
	cout<<root->d<<" ";//8
	preorderprint(root->left);//lst
	preorderprint(root->right);//rst
}


void inorderprint(node*root){
	if(root==NULL){
		return;
	}
	inorderprint(root->left);//lst
	cout<<root->d<<" ";//8
	
	inorderprint(root->right);//rst
}


void postorderprint(node*root){
	if(root==NULL){
		return;
	}
	postorderprint(root->left);//lst
	postorderprint(root->right);//rst
	cout<<root->d<<" ";//8
	
	
}


int countnodes(node*root){
	if(root==NULL){
		return 0;
	}
	
	int x=countnodes(root->left);
	int y=countnodes(root->right);
	return 1+x+y;

	// return 1+countnodes(root->left)+countnodes(root->right);
	
}
int sumnodes(node*root){
	if(root==NULL){
		return 0;
	}
	
	// int x=sumnodes(root->left);
	// int y=sumnodes(root->right);
	// return root->d+x+y;

	return root->d+sumnodes(root->left)+sumnodes(root->right);
	
}
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
bool searchkey(node*root,int key){
	if(root==NULL){
		return false;
	}

	if(root->d==key||searchkey(root->left,key)==true||searchkey(root->right,key)){
		return true;
	}
	return false;
}


int height(node*root){//3
	if(root==NULL){
		return 0;
	}


	return max(height(root->left),height(root->right))+1;

}



int diameter(node*root){//8
	if(root==NULL){
		return 0;
	}
	int op1=diameter(root->left);//3
	int op2=diameter(root->right);//2
	int op3=height(root->left)+height(root->right);
	return max(op1,max(op2,op3));
}


class p{
public:
	int H;
	int D;
};

p fastdia(node*root){
	p z;
	if(root==NULL){
		z.H=0;
		z.D=0;
		return z;
	}
	p x=fastdia(root->left);
	p y=fastdia(root->right);
	z.H=max(x.H,y.H)+1;
	int op1=x.D;
	int op2=y.D;
	int op3=x.H+y.H;
	z.D==max(op1,max(op2,op3));
	return z;

}
int main(){
	
	node*root=buildtree();
	
	// preorderprint(root);
	// cout<<endl;
	// inorderprint(root);
	// cout<<endl;
	// postorderprint(root);
	// cout<<endl;


	// cout<<sumnodes(root)<<endl;
	// cout<<countnodes(root)<<endl;

	// if(searchkey(root,90)==true){

	// 	cout<<"yes"<<endl;
	// }
	// else{
	// 	cout<<"No"<<endl;
	// }


	// cout<<diameter(root)<<endl;





	return 0;
}