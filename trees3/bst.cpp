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
	else if(d<root->data){
		root->left=insertinbst(root->left,d);
		return root;
	}
	else {
		root->right=insertinbst(root->right,d);
		return root;
	}
}

bool searchinbst(node*root,int key){
	if(root==NULL){
		return false;
	}


	if(root->data==key){
		return true;
	}
	else if(key<root->data){
		return searchinbst(root->left,key);
	}
	else{
		return searchinbst(root->right,key);

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


bool checkbst(node*root,int mi=INT_MIN,int ma=INT_MAX){
	if(root==NULL){
		return true;
	}
	if((root->data>=mi and root->data<=ma) and checkbst(root->left,mi,root->data) and checkbst(root->right,root->data+1,ma)){
		return true;
	}
	return false;
}


// void printinrangek1k2(node*root,int k1,int k2){
// 	// base case
// 	if(root==NULL){
// 		return;
// 	}


// 	// rec case
// 	printinrangek1k2(root->left,k1,k2);
// 	if(root->data>=k1 and root->data<=k2){
// 		cout<<root->data<<" ";
// 	}
// 	printinrangek1k2(root->right,k1,k2);

// }\

void printinrangek1k2(node*root,int k1,int k2){
	// base case
	if(root==NULL){
		return;
	}


	// rec case
	printinrangek1k2(root->right,k1,k2);
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";
	}
	printinrangek1k2(root->left,k1,k2);

}

int arr[]={1,3,5,7,8,9,10,13};
int n=sizeof(arr)/sizeof(int);//8



node* creatbstfromsortedarray(int s,int e){
	if(s>e){
		return NULL;

	}

	int mid=(s+e)/2;
	int d=arr[mid];
	node*root=new node(d);
	root->left=creatbstfromsortedarray(s,mid-1);
	root->right=creatbstfromsortedarray(mid+1,e);
	return  root;

}

int main(){

	node*root=creatbstfromsortedarray(0,n-1);
	// node*root=buildbst();

	levelwise(root);

	// if(checkbst(root)==true){
	// 	cout<<"yes bst "<<endl;
	// }
	// else{
	// 	cout<<"not a bst "<<endl;

	// }
	// int k1,k2;
	// cin>>k1>>k2;

	// printinrangek1k2(root,k1,k2);
	// int key;
	// cin>>key;
	// if(searchinbst(root,key)==true){
	// 	cout<<"key is present"<<endl;

	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	// }



	return 0;
}