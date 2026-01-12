#include<iostream>
#include "Log.h"
#include<string>
using namespace std ; 
void log(const char*);

// int multiply(int a , int b);{
//     log("multiply");
//     return a * b; 
// }
void multiplyAndlog(int a , int b){
  cout<<multiply(a,b)<<endl;
}
// for(init;condition;operation after going through the body)
int main(){
    for (int i = 0; i < 5; i++){
      log("hello world!");
    }
    log("========================");
    int i = 0 ;
    while(i<5){
      log("hello world!");
      i++;
    }
    
    log("========================");
    do{
     // the statement runs atleast once inside do while loop  
      log("hello world!");
      
    }while(i<5);
    
    return 0 ;
}
