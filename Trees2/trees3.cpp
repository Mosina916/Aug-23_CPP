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
bool searchintree(node*root,int key){
	// ?base case
	if(root==NULL){
		return false;

	}

	// rec case
	if(root->data==key ||searchintree(root->left,key)==true||searchintree(root->right,key)==true){
		return true;
	}
	return false;
}

int diameteroftree(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// rec case

	int op1=diameteroftree(root->left);
	int op2=diameteroftree(root->right);
	int op3=heightoftree(root->left)+heightoftree(root->right);

	return max(op1,max(op2,op3));

}

void mirror(node*root){
	if(root==NULL){
		return;
	}

	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
} 


node* levelwisebuild(){
	queue<node*> q;
	int data;
	cout<<"enter data of root"<<endl;
	cin>>data;//8
	node*root=new node(data);
	q.push(root);


	while(!q.empty()){
	node*x=q.front();//13
	q.pop();

	cout<<"Enter left and right child of "<<x->data<<endl;
	int lc,rc;
	cin>>lc>>rc;//-1 -1

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


void preorderprint(node*root){
	if(root==NULL){
		return;
	}

	cout<<root->data<<",";
	preorderprint(root->left);
	preorderprint(root->right);

}
void inorderprint(node*root){
	if(root==NULL){
		return;
	}

	
	inorderprint(root->left);
	cout<<root->data<<",";
	inorderprint(root->right);

}


int pre[]={8,10,1,6,4,7,3,14,13};
int ord[]={1,10,4,6,7,8,3,13,14};


// 8 3 14 13 10  6 7 4 1-->Preorder
int main(){
	// node*ro=levelwisebuild();
	// levelwise(ro);
	// node*root=buildtree();

	// preorderprint(root);
	// cout<<endl;
	// inorderprint(root);
	// cout<<endl;

	// cout<<"height of tree is : "<<heightoftree(root)<<endl;
	// cout<<"diameteroftree of tree is : "<<diameteroftree(root)<<endl;
	// mirror(root);

	// preorderprint(root);
	// cout<<endl;

	// levelwise(root);
	// int key;
	// cin>>key;
	// if(searchintree(root,key)==true){
	// 	cout<<"key is present"<<endl;

	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	// }





	return 0;
}