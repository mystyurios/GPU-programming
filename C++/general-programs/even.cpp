#include<iostream>
using namespace std ;
int main()
{
	cout<<"enter a number: "<<endl;
	int num ; 
	cin>>num ;
	if (num==0){
		cout<<"entered number is zero neither even nor odd "<<endl;
	}
	else if(num%2==0){
		cout<<num<<" is an even number "<<endl;
	}
	else {
		cout<<num<< "is an odd number "<<endl;
	}
	return 0 ;
	
}
