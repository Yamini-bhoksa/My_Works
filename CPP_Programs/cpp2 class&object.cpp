#include<iostream>
using namespace std;
class BankAccount{
	private:
		int AccountNumber;
		string HolderName;
		double balance;
    public:
	    BankAccount(int accNo,string name,double balnce){
	    AccountNumber=accNo;
		HolderName=name;
		balance=balnce;
}
void deposit(double amount){
	balance+=amount;
	cout<<"Deposited"<<amount<<endl;
}
void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
}
void display() {
        cout << "Account Number: " << AccountNumber << endl;
        cout << "Holder Name: " << HolderName << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() {
    BankAccount acc1(101, "John Doe", 5000);
    acc1.display();
    acc1.deposit(2000);
    acc1.withdraw(3000);
    acc1.display();
    return 0;
}
