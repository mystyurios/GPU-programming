#include<iostream>
using namespace std ;
int main(){
	int var = 8 ; 

	int* ptr = &var; 

	cout<<ptr<<endl;

	cout<<*ptr<<endl; // this  is dereferencing

	*ptr = 100 ; //modifying variable using pointer 

	cout<<var;
	return 0 ;
}

