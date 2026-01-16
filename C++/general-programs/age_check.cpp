#include<iostream>
using namespace std ;
int main() 
{	
	cout<<"enter your age :"<<endl;
	int age ; 
	cin>>age;
	if(age > 0){
		if(age<18){
			cout<<"you are not an adult!"<<endl;
		}else if (age >= 18 && age< 50){
			cout<<"you are an adult"<<endl;
		}else if (age >=50 ){
			cout<<"you are old"<<endl;
		}}
	return 0 ;
}

