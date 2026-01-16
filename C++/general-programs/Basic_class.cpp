#include<iostream> 
#include<string>
using namespace std ;
int main(){
	class student {
		public:
		string name ; 
		int age ; 
	};
	student s ;
	s.name = "yusuf";
	s.age = 21;
	cout<<s.name<<endl<<s.age<<endl;
	return 0 ; 
}
