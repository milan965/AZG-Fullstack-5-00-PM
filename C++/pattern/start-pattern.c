#include<iostream>
using namespace std;

int main(){
	
	int i,j;
	for(i=1;i<=4;i++){
		for(j=1;j<=i*2-1;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	
	return 0;
}
