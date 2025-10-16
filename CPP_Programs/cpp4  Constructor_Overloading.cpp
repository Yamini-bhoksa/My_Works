#include<iostream>
using namespace std;
class student{
	private:
	    int rollno;
	    string name;
	public:
		student(){
			rollno=0;
			name="unknown";
			cout << "Roll No: " << rollno << ", Name: " << name << endl;
		}
		student(int r){
			rollno=r;
			name="Not Defined";
			cout << "Roll No: " << rollno << ", Name: " << name << endl;
		}
		student(int r,string name){
			rollno=r;
			name=name;
			cout << "Roll No: " << rollno << ", Name: " << name << endl;
		}
};
int main(){
	student s1;
	student s2(2);
	student s3(3,"yamini");
	return 0;
}