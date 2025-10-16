In //In a multilevel inheritance, a derived class becomes a base class for another class
#include<iostream>
using namespace std;
class grandparent{
	public:
		void gp(){
			cout<<"I am a grand parent;"<<endl;
		}
};
class parent:public grandparent{
	public:
		void par(){
			cout<<"I am a parent;"<<endl;
		}
};
class child:public parent{
	public:
		void chi(){
			cout<<"I am a child;"<<endl;
		}
};
int main(){
	child c1;
	c1.gp();
	c1.par();
	c1.chi();
	return 0;
} 