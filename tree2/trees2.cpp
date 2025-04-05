#include<iostream>
#include<queue>
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

// o(n) tc
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
	z.D=max(op1,max(op2,op3));
	return z;

}


void mirror(node*root){
	if(root==NULL){
		return;
	}
	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
}

void levelwiseprint(node*root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
	node* x=q.front();//n
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
		q.push(NULL);
	}

	}
	else{
	cout<<x->d<<" ";//8
	if(x->left!=NULL){
		q.push(x->left);
	}
	if(x->right!=NULL){
		q.push(x->right);
	}
}
}



}


node* buildtreelevelwise(){
	queue<node*> q;
	cout<<"enter the data of root"<<endl;
	int data;
	cin>>data;//8
	
	node*root=new node(data);//8
	q.push(root);

	while(!q.empty()){
	node* x=q.front();//3
	q.pop();
	cout<<"take left and right child of "<<x->d<<endl;
	int lc,rc;
	cin>>lc>>rc;//-1 14
	if(lc!=-1){
		
		x->left=new node(lc);
		q.push(x->left);

	}

	if(rc!=-1){
		x->right=new node(rc);
		q.push(x->right);
	}
}


return root;


}


int main(){
	
	// node*root=buildtree();


	// mirror(root);
	node*root=buildtreelevelwise();

	// preorderprint(root); 
	levelwiseprint(root);
	
	// p a=fastdia(root);
	// cout<<a.D<<endl;
	// cout<<a.H<<endl;





	return 0;
}