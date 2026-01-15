#include<iostream> 
using namespace std ;
int main(){
	int a = 5 ;
	int& ref = a ;	//here ampersand is part of the type ref doesnot occupy memory it is not variable 
	// ref act as alias of a 
	ref = 2 ;
	cout<<a;

}

