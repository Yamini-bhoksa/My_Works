#include<iostream>
#include<list>
#include<vector>
using namespace std;
int main(){
	vector<int>v{1,2,3};
	v.push_back(5);
	v.erase(v.begin());
	cout<<"Vector elements:";
	for(int x:v){
		cout<<x<<" ";
		cout<<endl;
	}
	list<int>l{4,7,8};
	l.push_back(5);
	l.remove(8);
	cout<<"List elements:";
	for(int x:l){
		cout<<x<<" ";
		cout<<endl;
}
return 0;
};
