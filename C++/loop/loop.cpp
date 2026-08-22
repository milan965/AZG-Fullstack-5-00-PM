#include<iostream>
using namespace std;

int main(){
	//repeat and repeat task
//	10 time hello world;

	//3 types loop
//	while loop (entry control loop)
//	do while(Exit control loop)
//	for(entry control loop)


//	note
//	start=1  initialization
//	end=5    condition
//	inc ++ / dec--    increment / decrement

	//w.a.p print 1 to 5 numbers

	//while loop
//	int i=1;
//	while(i<=5){
//		  1<=5  true
//		  2<=5  true
//		  3<=5  true
//		  4<=5  true
//		  5<=5  true
//		  6<=5  false
//		cout<<i<<endl;   1 , 2 , 3 , 4 , 5
//		i++;
//		1++ , 2++ 3++ , 4++ ,5++
//		
//	}
//	int i=10;
//	do{
//		cout<<i<<endl;
//		i++;
//	}while(1<=5);

//	int i;
//	for(i=1;i<=5;i++){
//		cout<<i<<endl;
//	}

	//w.a.p to print 5 to 1
//	int i=5;
//	//5 4 3 2 1
//	while(i>=1){
//		cout<<i<<endl;
//		i--;
//	}


//	int i=5;
//	do{
//		cout<<i<<endl;
//		i--;
//	}while(i>=1);

//	int i;
//	for(i=5;i>=1;i--){
//		cout<<i<<endl;
//	}
	
	
	//break statement
//	w.a.p print 1 to 10
//	int i;
//	for(i=1;i<=10;i++){
//		if(i==5){
////		   1==5  false
////		   2==5  false
////		   3==5  false
////		   4==5  false
////		   5==5  true
//		   break;  //break statement
//		}
//		cout<<i<<endl; //1 , 2 , 3 , 4
//	}

	//continue statement  (skip)
	//w.a.p print 1 to 10 skip for 5 number
//	output :- 1 2 3 4 6 7 8 9 10

//	3 6 9 12 15 18 21 24 27 30 33 36 39 42 45 48
//	5 10 15 20 25 30 35 40 45 50
	
//	output:- 15 , 30 , 45

	int i;
	for(i=1;i<=50;i++){
		if(!(i%3==0 && i%5 == 0)){
			continue;
		}
		cout<<i<<" ";
	}
	
	
	return 0;
}
