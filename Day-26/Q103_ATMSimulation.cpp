#include <iostream>
using namespace std;
int main() {
    int choice, amount;
    int balance = 5000;

    cout<<"1. Check Balance\n";
    cout<<"2. Deposit\n";
    cout<<"3. Withdraw\n";
    cout<<"Enter your choice: ";
    cin>>choice;

    if (choice == 1) {
        cout<<"Balance = "<<balance<<endl;
    }
    else if (choice == 2) {
        cout<<"Enter amount: ";
        cin>>amount;
        balance += amount;
        cout<<"New Balance = "<<balance<<endl;
    }
    else if (choice == 3) {
        cout<<"Enter amount: ";
        cin>>amount;
        if (amount <= balance) {
            balance -= amount;
            cout<<"New Balance = "<<balance<<endl;
        }
        else {
            cout<<"Insufficient Balance!"<<endl;
        }
    }
    else {
        cout<<"Invalid Choice!"<<endl;
    }

    return 0;
}