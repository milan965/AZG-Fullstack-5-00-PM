#include<iostream>
using namespace std;

int main(){
	
//* * * * *
//
//* * * * *
//
//* * * * *
//
//* * * * *
//
//* * * * *

	int  i,j,s;
//	for(i=1;i<=5;i++){
//		for(j=1;j<=5;j++){
//			cout<<"* ";   * * * * *
//		}
//		cout<<"\n";
//	}

//*
//* *
//* * *
//* * * *
//* * * * *

//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j++){
//			cout<<"* ";
//		}
//		cout<<"\n";
//	}


//* * * * *
//* * * *
//* * *
//* *
//*

//	for(i=5;i>=1;i--){
//		for(j=1;j<=i;j++){
//			cout<<"* ";
//		}
//		cout<<"\n";
//	}	
//	for(i=1;i<=5;i++){
//		
//		for(s=4;s>=i;s--){
//			cout<<"  ";
//		}
//		
//		for(j=1;j<=i;j++){
//			cout<<"* ";
//		}
//		cout<<"\n";
//	}

//	* * * * *
//	  * * * *
//	    * * *
//	      * *
//	        *


//	for(i=1;i<=5;i++){
//		
//		for(s=2;s<=i;s++){
//			cout<<"  ";
//		}
//		
//		for(j=5;j>=i;j--){
//			cout<<"* ";
//		}
//		cout<<"\n";
//	}


	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1 || i==5 || j==1 || j==5){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}

	return 0;
}
