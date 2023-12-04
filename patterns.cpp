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


int main(){
	int n;
	cin>>n;
	pattern1(n);
}

