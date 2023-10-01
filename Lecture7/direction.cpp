#include<iostream>
using namespace std;
int main(){
	int x=0;
	int y=0;

	char ch;
	// cin>>ch;//'S'
	ch=cin.get();
	while(ch!='\n'){
	if(ch=='N'){
		y=y+1;//
	}
	else if(ch=='E'){
		x=x+1;//3 -2 
	}
	else if(ch=='S'){
		y=y-1;//
	}
	else{
		x=x-1;// 2 -2
	}
	// cin>>ch;//S
	ch=cin.get();//'\n'
	
	}



	// cout<<x<<" "<<y<<endl;
	if(x>=0 and y>=0){
		// ist quad
		// pehle E 
		for(int i=1;i<=x;i++){
			cout<<'E';
		}

		// north k lye 
		for(int i=1;i<=y;i++){
			cout<<'N';
		}

	}
	else if(x<=0 and y>=0){
		// 2nd quad
		for(int i=1;i<=y;i++){
			cout<<'N';
		}

		for(int i=1;i<=abs(x);i++){
			cout<<'W';
		}

	}
	else if(x<=0 and y<=0){
		// 3rd quad
		for(int i=1;i<=abs(y);i++){
			cout<<'S';
		}
			for(int i=1;i<=abs(x);i++){
			cout<<'W';
		}


	}
	else{
		// 4th quad
			for(int i=1;i<=x;i++){
			cout<<'E';
		}

			for(int i=1;i<=abs(y);i++){
			cout<<'S';
		}
	}

	cout<<endl;



	

	return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
// 	int x=0;
// 	int y=0;

// 	char ch;
// 	// cin>>ch;//'S'
// 	ch=cin.get();
// 	while(true){
// 		if(ch=='\n'){
// 			break;
// 		}
// 	if(ch=='N'){
// 		y=y+1;//
// 	}
// 	else if(ch=='E'){
// 		x=x+1;//3 -2 
// 	}
// 	else if(ch=='S'){
// 		y=y-1;//
// 	}
// 	else{
// 		x=x-1;// 2 -2
// 	}
// 	// cin>>ch;//S
// 	ch=cin.get();//'\n'
	
// 	}



// 	// cout<<x<<" "<<y<<endl;
// 	if(x>=0 and y>=0){
// 		// ist quad
// 		// pehle E 
// 		for(int i=1;i<=x;i++){
// 			cout<<'E';
// 		}

// 		// north k lye 
// 		for(int i=1;i<=y;i++){
// 			cout<<'N';
// 		}

// 	}
// 	else if(x<=0 and y>=0){
// 		// 2nd quad
// 		for(int i=1;i<=y;i++){
// 			cout<<'N';
// 		}

// 		for(int i=1;i<=abs(x);i++){
// 			cout<<'W';
// 		}

// 	}
// 	else if(x<=0 and y<=0){
// 		// 3rd quad
// 		for(int i=1;i<=abs(y);i++){
// 			cout<<'S';
// 		}
// 			for(int i=1;i<=abs(x);i++){
// 			cout<<'W';
// 		}


// 	}
// 	else{
// 		// 4th quad
// 			for(int i=1;i<=x;i++){
// 			cout<<'E';
// 		}

// 			for(int i=1;i<=abs(y);i++){
// 			cout<<'S';
// 		}
// 	}

// 	cout<<endl;


	

// 	return 0;
// }