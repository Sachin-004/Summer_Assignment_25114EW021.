#include <iostream>
using namespace std;
int main() {
    int id;
    string name;
    float salary;

    cout<<"Enter Employee ID: ";
    cin>>id;
    cout<<"Enter Employee Name: ";
    cin>>name;
    cout<<"Enter Salary: ";
    cin>>salary;

    cout<<"\nEmployee Record"<<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;

    return 0;
}