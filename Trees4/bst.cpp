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


// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -

int height(node*root){//3
	if(root==NULL){
		return 0;
	}


	return max(height(root->left),height(root->right))+1;

}

node*insertinbst(node*root,int data){

	if(root==NULL){
		root=new node(data);
		return root;

	}
	else if(data<=root->d){
		// left mai
		root->left=insertinbst(root->left,data);
		return root;

	}
	else{
		// right mai

		root->right=insertinbst(root->right,data);
		return root;

	}
}

node* buildbst(){
	node*root=NULL;//8
	int data;
	cin>>data;//4.5
while(data!=-1){

	root=insertinbst(root,data);//300 10
	cin>>data;//-1
}

return root;




}


void k1tok2range(node*root,int k1,int k2){
	if(root==NULL){
		return;
	}

	k1tok2range(root->left,k1,k2);
	if(root->d>=k1 and root->d<=k2){
		cout<<root->d<<" ";
	}

	k1tok2range(root->right,k1,k2);
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

bool isbtbst(node*root,int mi=INT_MIN,int ma=INT_MAX){

	if(root==NULL){
		return true;
	}
	if((root->d>=mi and root->d<=ma) and isbtbst(root->left,mi,root->d) and isbtbst(root->right,root->d+1,ma)){
		return true;
	}
	return false;
}

node* f(int *arr,int s,int e){
   	if(s>e){
   		return NULL;

   	}

   	int mid=(s+e)/2;
   	node*root=new node(arr[mid]);
   	root->left=f(arr,s,mid-1);
   	root->right=f(arr,mid+1,e);
   	return root;


   }

   class T{
   public:
   	int h;
   	bool isb;
   	T(){
   		h=0;
   		isb=true;
   	}

   };


  T isbalance(node*root){
   	T z;
   	if(root==NULL){

   		return z;
   	}


   	T x=isbalance(root->left);
   	T y=isbalance(root->right);
   	z.h=max(x.h,y.h)+1;
   	if(x.isb and y.isb and abs(x.h-y.h)<=1){
   		z.isb=true;
   	}
   	else{
   		z.isb=false;
   	}
   	return z;


   }

class Q{
public:
	node*head;
	node*tail;
	Q(){
		head=NULL;
		tail=NULL;
	}
};

 Q bsttosortedll(node*root){
   	Q z;
   	if(root==NULL){
   		return z;
   	}


   	if(root->left==NULL and root->right==NULL){
   		z.head=root;
   		z.tail=root;
   		// return z;
   	}
   	else if(root->left!=NULL and root->right==NULL){
   		Q x=bsttosortedll(root->left);
   		x.tail->right=root;//link
   		z.head=x.head;
   		z.tail=root;
   		// return z;
   	}
   	else if(root->left==NULL and root->right!=NULL){
   		Q y=bsttosortedll(root->right);
   		root->right=y.head;//link
   		z.head=root;
   		z.tail=y.tail;
   		// return z;
   		
   	}
   	else{
   		Q x=bsttosortedll(root->left);
   		Q y=bsttosortedll(root->right);
   		x.tail->right=root;//link
   		root->right=y.head;//link
   		z.head=x.head;
   		z.tail=y.tail;
   		// return z;

   	}
   	return z;
   }


  void  printll(node*head){

   	while(head!=NULL){
   	cout<<head->d<<" ";
   	head=head->right;
   }

   }


 node* deletioninbst(node*root,int key){\
 	// 1
   	if(root->d==key){
   		if(root->left==NULL and root->right==NULL){
   			delete root;
   			root=NULL;
   			return root;
   		}
   		else if(root->left!=NULL and root->right==NULL){
   			node*temp=root->left;
   			delete root;
   			root=NULL;
   			return temp;
   		}
   		else if(root->left==NULL and root->right!=NULL){
   			node*temp=root->right;
   			delete root;
   			root=NULL;
   			return temp;
   		}
   		else{
   			node*temp=root->left;
   			while(temp->right!=NULL){
   			temp=temp->right;
   		}
   		swap(root->d,temp->d);
   		root->left=deletioninbst(root->left,key);
   		return root;

   		}

   	}
   	// 2
   	else if(key<root->d){
   		// LST
   		root->left=deletioninbst(root->left,key);
   		return root;;
   	}
   	//3
   	else{

   		// rst
   		root->right=deletioninbst(root->right,key);
   		return root;;
   	}
   }


  void rightview(node*root,int cl,int &mlptn){
  	if(root==NULL){
  		return;
  	}

  	if(cl>mlptn){
  		cout<<root->d<<" ";
  		mlptn++;
  	}
  	rightview(root->right,cl+1,mlptn);
  	rightview(root->left,cl+1,mlptn);

  }

int main(){
	node*root=buildbst();
	
	// // int arr[]={1,2,3,4,5,6,7,8};
	// // int n=sizeof(arr)/sizeof(int);
	// T r=isbalance(root);
	// if(r.isb){
	// 	cout<<"yes"<<endl;
	// }
	// else{
	// 	cout<<"no"<<endl;
	// }


	// node*x=deletioninbst(root,6);

	// Q w=bsttosortedll(root);
	// printll(w.head);

	// node*root=f(arr,0,n-1);
	
	// // node*root=buildbst();
	levelwiseprint(root);

	int p=0;
	rightview(root,1,p);
	// cout<<endl;
	// k1tok2range(root,4,13);
	

	// searchinbst(root,13);

	// if(isbtbst(root)){
	// 	cout<<"yes"<<endl;
	// }
	// else{
	// 	cout<<"NO"<<endl;
	// }





	



	return 0;
}