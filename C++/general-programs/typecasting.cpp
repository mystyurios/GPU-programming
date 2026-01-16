#include<iostream>
using namespace std ;
int main()
{
	// strongly typed -> meaning type is enforced
	
	int a = 5 , b = 2 ;
	cout << "5/2 (int) = " << a/b <<endl ;
	double c= 5.0 , d = 2.0; 
	cout << "5.0/2.0 (double) = "<<c/d <<endl;
	int x = 10 ; 
	double y = 3.7 ;
	cout <<"int + double = " << x+y << endl;
	int result = (int)(10.8 + 5.7); // explicit casting
	cout << "casting result: "<<result<<endl;
	//order of operator 
	cout<<"5+3*2 = "<<5+3*2<<endl;
	cout<<"(5+3)*2 = "<<(5+3)*2<<endl;
	//modulo operator 
	cout<<"10%3="<<10%3<<endl;
	cout<<"20%7="<<20%7<<endl;
}

