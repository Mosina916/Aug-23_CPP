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
node* buildtree(){
	int d;cin>>d;//8//          1
	if(d==-1){
		return NULL;
	}
	node*root=new node(d);//8   2
	root->left=buildtree();   //3
	root->right=buildtree();//  4
	return root;			//  5
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


node* buildtreelevelwise(){
	queue<node*> q;
	cout<<"enter the data of root"<<endl;
	int d;
	cin>>d;//8
	node*root=new node(d);
	q.push(root);

	while(!q.empty()){
	node*x=q.front();//50
	q.pop();
	int lc,rc;
	cout<<"enter the left and right child of "<<x->data<<endl;
	cin>>lc>>rc;//1 6 
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
int preorarr[]={8,10,1,6,4,7,3,14,13};
int inorarr[]={1,10,4,6,7,8,3,13,14};
int i=0;

node* buildtreeusingprein(int s,int e){//0 8
	if(s>e){
		return NULL;
	}

	int rd=preorarr[i];//8
	i++;
	int k;
	for(int j=s;j<=e;j++){//1
		if(rd==inorarr[j]){
			k=j;//5
			break;

		}

	}
	node*root=new node(rd);
	root->left=buildtreeusingprein(s,k-1);
	root->right=buildtreeusingprein(k+1,e);
	return root;


}

int main(){
	int n=sizeof(preorarr)/sizeof(int);//9
	node*root=buildtreeusingprein(0,n-1);
	// node* root=buildtreelevelwise();
	levelwiseprint(root);


	



	return 0;
}