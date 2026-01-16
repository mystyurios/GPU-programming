// loop is based on our style what do we want use (while , do while , for )

#include<iostream> 
using namespace std ;
int main(){
	for (int i = 1 ; i <= 5 ; i++){
		cout<<i<<endl;
	}
	int a = 1 ;
	while( a <=5){
		cout<<a<<endl ; 
		a++;
	}
	a = 1 ;
	do {
		cout<<a++<<endl;
	}while(a<=5);
	return 0 ; 
}

