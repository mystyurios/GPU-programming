#include<iostream>
// #include "Log.h"
#include<string>
using namespace std ; 
void log(const char*);

// int multiply(int a , int b);{
//     log("multiply");
//     return a * b; 
// }
// void multiplyAndlog(int a , int b){
//   cout<<multiply(a,b)<<endl;
// }
// // for(init;condition;operation after going through the body)
// int main(){
    
//   for (int i = 0; i < 5; i++){
//       if(i%2==0){
//         continue; // skip this step and go back to beginning
//       }
//       log("hello world!");
//       cout<<i<<endl;
//     }
//   int j = 0 ;
//   while(j<10){
//     if((j+1)%5==0){
//       break; // exit the loop 
//     }
//     cout<<"iteration number : "<<j+1<<endl;
//     j++;
//   }
    
//     return 0 ; // not necessarily inside the loop 


int main(){
  int var = 8 ;
  int* ptr = &var ; 
  // pointer is holding address -> 0 is not a valid memory address or null
  *ptr = 10 ; // can access and write data 
  cout<<var<<endl;

}
