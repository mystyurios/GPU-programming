#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ;
int main(){
	srand(time(0));
	int x = rand()%100+1;
	while(true){
	
	cout<<"enter a number between 0-100"<<endl;
	int num ; 
	cin>>num;
	
	if(num==x){
		cout<<"you guessed the correct number !"<<endl;
		break;
	}
	else if (num > x){
		cout<<"the entered number is too high !"<<endl;
	}
	else{
		cout<<"the entered number is too low !"<<endl;
	}
}
	return 0;
}
