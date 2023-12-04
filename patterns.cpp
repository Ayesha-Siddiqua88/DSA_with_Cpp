#include<iostream>
using namespace std;


//pattern 1
void pattern1(int n){
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			cout<< ".";
		}
		cout<<endl;
	}
}


//pattern 2
void pattern2(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<". ";
		}
		cout<<endl;
	}
}


//pattern 3
void pattern3(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
}


//pattern 4
void pattern4(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}


//pattern 5
void pattern5(int n){
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			cout<<".";
		}
		cout<<endl;
	}
}


//pattern 6
void pattern6(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<j;
		}
		cout<<endl;
	}
}


//pattern 7
void pattern7(int n){
//	zero base indexing
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		for(int k=0;k<2*i+1;k++){
			cout<<".";
		}
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		cout<<endl;	
}}


//pattern 8
void pattern8(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int j=0;j<2*n-(2*i+1);j++){
			cout<<".";
		}
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}


//pattern 9
void pattern91(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<".";
		}
		cout<<endl;
	}
}
void pattern92(int n){
	for(int i=0;i<=n;i++){
		for(int j=n;j>=i;j--){
			cout<<".";
		}
		cout<<endl;
	}
}


//pattern 11
void pattern11(int n){
	int star=1;
	for(int i=0;i<n;i++){
		if(i%2==0) star=1;
		else star=0;
		for(int j=0;j<=i;j++){
			cout<<star;
			star=1-star;
		}
		cout<<endl;
	}
}


void pattern12(int n){
	int space=2*(n-1);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		for(int j=1;j<=space;j++){
			cout<<" ";
		}
		for(int j=i;j>=1;j--){
			cout<<j;
		}
		cout<<endl;
		space-=2;
	}
}


//pattern 13
void pattern13(int n){
	int number=1;
	for(int i=1;i<n;i++){
		for(int j=1;j<=i;j++){
			cout<<number;
			number+=1;

		}
		cout<<endl;
	}
}


//pattern 14
void pattern14(int n){
	for(int i=1;i<n;i++){
		for(char ch='A';ch<='A'+i;ch++){
			cout<<ch;
		}
		cout<<endl;
	}
}


//pattern 15
void pattern15(int n){
	for(int i=1;i<n;i++){
		for(char ch='A';ch<='A'+(n-i-1);ch++){
			cout<<ch;
		}
		cout<<endl;
	}
}


//pattern 16
void pattern16(int n){
	char alpha='A';
	for(int i=1;i<n;i++){
		for(char ch='A';ch<='A'+(i-1);ch++){
			cout<<alpha;
		}
		alpha=alpha+1;
		cout<<endl;
	}
}


int main(){
	int n;
	cin>>n;
	pattern1(n);
}

