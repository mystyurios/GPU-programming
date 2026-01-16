#include<iostream>
using namespace std ;
int main()
{
	cout<<"enter a letter (uppercase / lowercase )"<<endl;
	char letter ;
	cin>> letter ;
	if (letter>='a'&&letter<='z')
	{
		cout<<"the letter is in lowercase"<<endl;
	}
	else{
		cout<< "the letter is in uppercase"<<endl;
	}
	return 0 ;

}
