#include<iostream>
using namespace std;

int main(){
	
//	int i;
//	for(i=2;i<=20;i=i+2){
//			cout<<i<<" ";
//	}
//	int i=1;
//	while(i<=20){
//		if(i%2==0){
//			cout<<i<<" ";
//		}
//		i++;
//	}
	
	
	//Sum of Numbers from 1 to N
//	int no,i,sum=0;
//	cout<<"Enter no :- ";
//	cin>>no;
//	for(i=1;i<=no;i++){
//		cout<<i<<" ";
//		sum+=i;
//	}
//	cout<<"Sum :- "<<sum;
//	int i=1,no,sum=0;
//	cout<<"Enter no :- ";
//	cin>>no;
//	while(i<=no){
//		cout<<i<<" ";
//		sum += i;
//		i++;
//	}
//	cout<<"Sum :- "<<sum;


	//Factorial of a Number
//	input 5
//	5 * 4 * 3 * 2 * 1
//output :- 120

//	int i,fact=1,no;
//	cout<<"Enter no :- ";
//	cin>>no;
//	for(i=1;i<=no;i++){
//		fact = fact * i;
//	}
//	cout<<"Ans :- "<<fact;


	//Count Digits in a Number
//	input 2334
//	output 4 numbers

//	int no=01,count=0;
//	while(no != 0){
//		no = no / 10;
//		count++;
//	}
//	cout<<"Count Digit :- "<<count;


//	Print Numbers Divisible by 5 (1 to 50)
//	int i;
//	for(i=1;i<=50;i++){
//		if(i%5==0){
//			cout<<i<<" ";
//		}
//	}


//	Fibonacci Series
//	0 1 1 2 3 5
//	int a=3,b=5,c=5,i;
//	cout<<a<<" "<<b<<" ";
//	for(i=2;i<=5;i++){
//		c = a + b;   //2 + 3
//		cout<<c<<" ";  //0 1 1 2 3 5 
//		a=b;        
//		b=c;
//	} 

//	Reverse a Number
//input :- 123
//output :- 321

	int no=0,rem=1,rev=321;
	while(no != 0){
		123 != 0 true
		12 != 0  true
		1 != 0 true
		0 != 0 false
		rem = no % 10;
//		      123 % 10
			  //12 % 10
			   //1 % 10
		rev = (rev * 10) + rem;
//		       32  * 10 + 1
		no/=10;
		no = 123/10
		     12 / 10
		     1/10
	}
	cout<<"Rev :- "<<rev;

	return 0;
}
