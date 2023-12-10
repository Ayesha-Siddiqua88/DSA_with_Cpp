#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N;
	cin>>N;
	
//	method 1
	for(int i=1;i<=N;i++){
		if(N%i==0){
			cout<<i<<endl;
		}
	}
	
//	method 2
     for(int i=1;i<=sqrt(N);i++){
     	if(N%i==0){
     		cout<<i<<endl;
     		if((N/i)!=i){
     			cout<<(N/i)<<endl;
			 }
		 }
	 }
}
