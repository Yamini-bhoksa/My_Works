#include<iostream>
using namespace std;
class Animal{
	public:
		void eat(){
			cout<<"Animal is eating"<<endl;
		}
};
class dog:public Animal{
	public:
	void bark(){
		cout<<"Dog is Barking"<<endl;
	}
};
int main(){
	dog d1;
	d1.eat();
	d1.bark();
	return 0;
}