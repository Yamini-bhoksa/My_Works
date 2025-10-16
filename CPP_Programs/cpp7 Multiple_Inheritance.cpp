//In multiple inheritance, a derived class inherits from two or more base classes.
#include<iostream>
using namespace std;
class Teacher{
	public:
		void teach(){
			cout<<"teacher teaches"<<endl;
		}
};
class Researcher{
	public:
		void Research(){
			cout<<"Researcher conducts"<<endl;
		}
};
class Professor:public Teacher,public Researcher{
	public:
		void guide(){
			cout<<"professor guides"<<endl;
		}
};
int main(){
	Professor P1;
	P1.teach();
	P1.Research();
	P1.guide();
	return 0;
}