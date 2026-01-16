#include<iostream>
using namespace std ;
int main(){
	int n ; 
	int sum = 0 ;
	cout<<"enter value of n :";
	cin>>n;
	for(int i = 1 ; i <=n ; i+=2){
		sum+=i;
	}
	cout<<"sum of "<<n<<"numbers is : "<<sum<<endl;
	return 0 ;
}
