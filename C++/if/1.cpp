#include<iostream>
using namespace std;

int main(){

//	int a=10;
//	
//	if(a == 5){
//		cout<<"Equal";
//	}else{
//		cout<<"Not Equal";
//	}
	
//	int age = 17;
//	if(age >= 18){
//		cout<<"You can vote"<<endl;
//	}else{
//		cout<<"You can note vote";
//	}

	//nested if
	int a=9,b=9,c=9;
	if(a==b && b==c && c==a){
		cout<<"All are same";
	}else{
		if(a > b){
			if(a > c){
				cout<<"A is Max";
			}else{
				cout<<"C is Max";
			}
		}else{
			if(b > c){
				cout<<"B is Max";
			}else{
				cout<<"C is Max";
			}
		}
	}
	
	
	return 0;
}
