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

class hb{
public:
	int h;
	bool isbal;
	hb(){
		h=0;
		isbal=true;
	}
};

hb isbalnced(node*root){
	hb z;
	// base case
	if(root==NULL){
		return z;
	}


	// rec case
	hb x=isbalnced(root->left);
	hb y=isbalnced(root->right);

	z.h=max(x.h,y.h)+1;
	if(x.isbal==true and y.isbal==true and abs(x.h-y.h)<=1){
		z.isbal=true;
	}
	else{
		z.isbal=false;

	}

	return z;


}
class ll{
public:
	node* h;
	node*t;
	ll(){
		h=NULL;
		t=NULL;
	}
};

ll bsttosortedll(node*root){
	ll z;
	// base case
	if(root==NULL){
		return z;

	}

	// rec case
	// case 1: no lst no rst
	if(root->left==NULL and root->right==NULL){
		z.h=root;
		z.t=root;
		// return z;

	}

	// case 2: lst ,no rst
	else if(root->left!=NULL and root->right==NULL){
		ll x =bsttosortedll(root->left);//1 3 4 6 7
		x.t->right=root;//link create kar rahe
		z.h=x.h;
		z.t=root;
		// return z;
		
	}
	// case 3: no lst but rst
	else if(root->left==NULL and root->right!=NULL){
		ll y=bsttosortedll(root->right);
		root->right=y.h;//link
		z.h=root;
		z.t=y.t;
		// return z;


	}
	// case 4: lst  rst
	else{
		ll x =bsttosortedll(root->left);
		ll y=bsttosortedll(root->right);
		x.t->right=root;//link
		root->right=y.h;//link
		z.h=x.h;
		z.t=y.t;
		// return z;




	}

	return z;


}

void llprint(node* curr){

	while(curr!=NULL){
		cout<<curr->data<<"-->";//1
	curr=curr->right;


	}
	cout<<endl;
	

}

void rightview(node*root,int cl,int&mlttn){
	if(root==NULL){
		return;
	}

	if(cl>mlttn){
		cout<<root->data<<" ";
		mlttn++;
	}
	rightview(root->right,cl+1,mlttn);
	rightview(root->left,cl+1,mlttn);

}


void leftview(node*root,int cl,int&mlttn){
	if(root==NULL){
		return;
	}

	if(cl>mlttn){
		cout<<root->data<<" ";
		mlttn++;
	}
	leftview(root->left,cl+1,mlttn);
	leftview(root->right,cl+1,mlttn);
	

}


int main(){

	
	node*root=buildbst();
	int c=0;
	// rightview(root,1,c);

	// ll d=bsttosortedll(root);
	// llprint(d.h);
	// hb a=isbalnced(root);
	// if(a.isbal==true){
	// 	cout<<"yes balanced "<<endl;
	// }
	// else{
	// 	cout<<"not balanced "<<endl;

	// }

	// levelwise(root);
	leftview(root,1,c);

	


	return 0;
	// https://www.linkedin.com/posts/monis-siddiqui-00259a181_cred-sdet-intern-frontend-activity-7154868773336891392-GMwd?utm_source=share&utm_medium=member_desktop
	// https://www.linkedin.com/posts/therjrajesh_comment-interested-jobseekers-activity-7154734921675087872-XQOw?utm_source=share&utm_medium=member_desktop
}