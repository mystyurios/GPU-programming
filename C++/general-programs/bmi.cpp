#include<iostream>
using namespace std ;
int main()
{
	cout<<"enter your weight (in kg)"<<endl;
	float weight ;
	cin >> weight ;
	cout<<"enter your height (in m)"<<endl;\
	float height;
	cin >> height ;
	float bmi = weight/(height*height);
	cout<<"your bmi is "<<bmi<<endl;
	return 0 ; 

}
