#include <iostream>
using namespace std;
int main() {
    int accNo;
    string name;
    float balance;

    cout<<"Enter Account Number: ";
    cin>>accNo;
    cout<<"Enter Account Holder Name: ";
    cin>>name;
    cout<<"Enter Balance: ";
    cin>>balance;

    cout<<"\nBank Account Details"<<endl;
    cout<<"Account Number: "<<accNo<<endl;
    cout<<"Account Holder: "<<name<<endl;
    cout<<"Balance: "<<balance<<endl;

    return 0;
}