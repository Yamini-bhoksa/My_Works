#include<iostream>
using namespace std;
class Demo{
	public:
		Demo(){
		cout<<"Default constructor called"<<endl;
	}
	~Demo(){
		cout<<"Destructor called"<<endl;
	}
};
int main(){
	Demo obj;
	cout<<"Inside main function"<<endl;
	return 0;
}