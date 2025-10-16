#include<iostream>
using namespace std;
class Book{
	private:
		string title;
		int pages;
	public:
		Book(string t,int p){
			title=t;
			pages=p;
		}
		Book(const Book&b1){
			title=b1.title;
			pages=b1.pages;
		}
	void display(){
		cout<<"Book Name:"<<title<<"no of pages:"<<pages<<endl;
	}
};
int main(){
	Book b1("chandu publications",200);
	Book b2=b1;
	b1.display();
	b2.display();
	return 0;
}