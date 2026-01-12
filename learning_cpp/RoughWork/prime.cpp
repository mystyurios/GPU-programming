#include<iostream>
using namespace std ; 
int main(){
	int num ;
	int count = 0 ;
	cout<<"enter a number :"<<endl;
	cin>>num;
	for(int i = 1 ; i<=num ; i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<"the number is a prime number "<<endl;
	}
	else{
		cout<<"the number is a composite number "<<endl;
	}
	return 0 ; 
}


