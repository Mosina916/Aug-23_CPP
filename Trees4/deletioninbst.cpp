#include<iostream>
#include<queue>
using namespace std;
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


node* insertinbst(node*root,int  d){//null 8
	if(root==NULL){
	root=new node(d);
	return root;
	}
	else if(d<=root->data){
		root->left=insertinbst(root->left,d);//null 3
		return root;
	}
	else{
		root->right=insertinbst(root->right,d);//null 8
		return root;
	}
}
node*bstcreate(){
	int d;
	cin>>d;//10
	node*root=NULL;
	while(d!=-1){
		root=insertinbst(root,d);//300 8
		cin>>d;//-1
	}
	return root;
}


node* deletion(node*root,int key){
	if(key==root->data){
		// mera kaam 
		if(root->left==NULL and root->right==NULL){
			delete root;
			root=NULL;
			return root;
		}
		else if(root->left!=NULL and root->right==NULL){
			node*temp=root->left;
			delete root;
			root=temp;
			return root;
		}
		else if(root->left==NULL and root->right!=NULL){
			node*temp=root->right;
			delete root;
			root=temp;
			return root;
		}
		else{
			node*temp=root->left;


			while(temp->right!=NULL){
			temp=temp->right;
		}

		swap(root->data,temp->data);
		root->left=deletion(root->left,key);
		return root;

		}

	}
	else if(key<root->data){
		root->left=deletion(root->left,key);//200 5
		return root;
	}
	else{
		root->right=deletion(root->right,key);//200 5
		return root;

	}
}
void levelwiseprint(node*root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node*x=q.front();
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
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main(){

	node*root=bstcreate();
	levelwiseprint(root);
	cout<<endl;
	int key;
	cin>>key;
	root=deletion(root,key);
	levelwiseprint(root);
	cout<<endl;


	




	return 0;
}