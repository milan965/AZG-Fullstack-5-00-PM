#include<iostream>
using namespace std;
//multiple condition check ladder if
int main(){
	int a=10,b=10,c=10,d=10;
	if(a > b && a > c && a > d){
		cout<<"A is Max";
	}else if(b > a && b > c && b > d){
		cout<<"B is Max";
	}else if(c > a && c > b && c > d){
		cout<<"C is Max";
	}else if(d > a && d > b && d > c){
		cout<<"D is Max";
	}else{
		cout<<"All are same";
	}
	
	
	return 0;
}
