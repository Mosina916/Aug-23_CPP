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
bool searchbst(node*root,int key){
	if(root==NULL){
		return false;
	}

	bool x;
	if(root->data==key){
		x=true;
	}
	else if(key<root->data){
		x=searchbst(root->left,key);
	}
	else{
		x =searchbst(root->right,key);

	}
	return x;

}

// sorted k1 k2 range
void printinrangek1k2(node*root,int k1,int k2){
	if(root==NULL){
		return;
	}



	printinrangek1k2(root->left,k1,k2);//4 6 7
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";//8
	}
	printinrangek1k2(root->right,k1,k2);//10 13


}

bool checkifbst(node*root,int mi=INT_MIN,int ma=INT_MAX){
	if(root==NULL){
		return true;
	}
	if((root->data>=mi and root->data<=ma) and checkifbst(root->left,mi,root->data) and checkifbst(root->right,root->data+1,ma)){
		return true;
	}
	return false;

}
int arr[]={1,2,3,4,5,6,7,8,9};

node* buildtreefromarr(int s,int e){
	if(s>e){
		return NULL;
	}
	int mid=(s+e)/2;
	node*root=new node(arr[mid]);
	root->left=buildtreefromarr(s,mid-1);
	root->right=buildtreefromarr(mid+1,e);
	return root;
}

int main(){
	int n=sizeof(arr)/sizeof(int);
	node*root=buildtreefromarr(0,n-1);
	// buildtreefromarr(0,n-1);

	// node*root=bstcreate();
	levelwiseprint(root);
	// int k1,k2;
	// cin>>k1>>k2;
	// printinrangek1k2(root,k1,k2);

	
	// if(checkifbst(root)==true){
	// 	cout<<"yes"<<endl;
	// }
	// else{
	// 	cout<<"NO"<<endl;

	// }

	// if(searchbst(root,90)==true){
	// 	cout<<"present"<<endl;
	// }
	// else{
	// 	cout<<"not present"<<endl;

	// }

	//1 2 3 4 5 6 7 8 9
	
	



	return 0;
}