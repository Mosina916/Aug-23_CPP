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
node* insertinbst(node*root,int d){
	if(root==NULL){
		root=new node(d);
		return root;
	}
	else if(d<=root->data){
		root->left=insertinbst(root->left,d);
		return root;
	}
	else {
		root->right=insertinbst(root->right,d);
		return root;
	}
}


node* buildbst(){
	node*root=NULL;
	int d;
	cin>>d;
	while(d!=-1){
		root=insertinbst(root,d);
		cin>>d;
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


node* deleteinbst(node*root,int key){
	if(key<root->data){
		// in lst
		root->left=deleteinbst(root->left,key);
		return root;
	}
	else if(key>root->data){
		// in lst
		root->right=deleteinbst(root->right,key);
		return root;
	}
	else{
		// case 1 single  no lst no rst
		if(root->left==NULL and root->right==NULL){

			delete root;
			return NULL;

		}
		// case 2 lst no rst
		else if(root->left!=NULL and root->right==NULL){

			node*temp=root->left;
			delete root;
			return temp;
			
		}
		// case 3 no lst rst
		else if(root->left==NULL and root->right!=NULL){
			node*temp=root->right;
			delete root;
			return temp;
			
		}
		else{
			// bth lst and rst

			// left k max se 

			node*temp=root->left;
			while(temp->right!=NULL){
				temp=temp->right;

			}

			swap(root->data,temp->data);
			root->left=deleteinbst(root->left,key);

			return root;

			// right k min se replace karna hai

				// node*temp=root->right;
			// while(temp->left!=NULL){
			// 	temp=temp->left;

			// }

			// swap(root->data,temp->data);
			// root->right=deleteinbst(root->right,key);

			// return root;
			
			

		}

	}
}



int main(){

	
	node*root=buildbst();

	

	int key;
	cin>>key;

	node*newroot=deleteinbst(root,key);

	levelwise(newroot);


	


	return 0;

}