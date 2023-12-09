#include<iostream>
using namespace std;

//extracting digits in reverse order
int main(){
	int N;
	int last_digit;
	cin>>N;
	while(N>0){
		last_digit=N%10;
		N=N/10;
		cout<<last_digit;
	}
}
