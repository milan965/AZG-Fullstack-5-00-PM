#include<iostream>
using namespace std;
//user define function

//2 types function

//1 :-  no argument no return
//2 :- no return with argument
//3 :- no argument with return
//4 :- argument with return  
//
int sum(int a,int b,int c){
	return a*b*c;
}
int main(){
	int ans = sum(10,2,3);
	cout<<"Ans :- "<<ans<<endl;
	return 0;
}
