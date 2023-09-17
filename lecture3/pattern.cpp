#include<iostream>
using namespace std;

int main(){
	int tr;
	cin>>tr;
	// row 1
	int i=1;
	while(i<=tr){
		cout<<'*'<<'\t';
		i=i+1;
	}
	cout<<endl;


	// part 2-->r2 to to 2
	int r=1;
	while(r<=(tr-1)/2){


	// star
	int j=1;
	while(j<=(tr+1)/2-r){
		cout<<'*'<<'\t';
		j=j+1;
	}
	



	// space

	int k=1;
	while(k<=2*r-1){
		cout<<' '<<'\t';
		k=k+1;
	}
	

	// star
	int p=1;
	while(p<=(tr+1)/2-r){
		cout<<'*'<<'\t';
		p=p+1;
	}


	cout<<endl;
	r=r+1;

}


// 3rd part

r=1;
while(r<=(tr-1)/2-1){

// star
	int j=1;
	while(j<=r+1){
		cout<<'*'<<'\t';
		j=j+1;
	}
	



	// space

	int k=1;
	while(k<=tr-2-(2*r)){
		cout<<' '<<'\t';
		k=k+1;
	}
	

	// star
	int p=1;
	while(p<=r+1){
		cout<<'*'<<'\t';
		p=p+1;
	}

	r=r+1;
	cout<<endl;
}


// part 4

int y=1;
	while(y<=tr){
		cout<<'*'<<'\t';
		y=y+1;
	}
	cout<<endl;


	





	


	return 0;
}