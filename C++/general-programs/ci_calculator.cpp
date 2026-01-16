#include<iostream>
#include<cmath>
using namespace std ;

int main()
{
	// ci formula = p*(((1+r/100)^t)-1);
	cout<<"please enter the following details in an order , (principal amount , rate and time )"<<endl;
	float p , r , t ;
	cin>>p>>r>>t;
	double amount = p*pow((1+r/100),t);
	double ci = amount - p ;
	cout<<"compound interest is : "<<ci;
	return 0 ;
}

