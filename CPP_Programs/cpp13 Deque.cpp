#include<iostream>
#include<deque>
using namespace std;
int main(){
	deque<int>dq;
	dq.push_back(9);
	dq.push_front(6);
	dq.push_back(2);
	dq.pop_front();
	cout<<"Deque elements:";
	for(int x:dq){
		cout<<x<<" ";
	}
	return 0;
}
