#include<iostream>
using namespace std;

int main(){
	int N, cube=0;
	cin>>N;
	int temp=N;
  
	while(N!=0){
		int last_digit=N%10;
		cube=cube+(last_digit*last_digit*last_digit);
		N=N/10;
	}
  
	if(cube==temp){
		cout<<"true";
	}
  else{
		cout<<"false";
	}
  
}
