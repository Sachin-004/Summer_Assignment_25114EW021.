#include <iostream>
using namespace std;
int main() {
    string name;
    float basic, bonus, total;

    cout<<"Enter Employee Name: ";
    cin>>name;
    cout<<"Enter Basic Salary: ";
    cin>>basic;
    cout<<"Enter Bonus: ";
    cin>>bonus;

    total = basic + bonus;

    cout<<"\nSalary Details"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Basic Salary: "<<basic<<endl;
    cout<<"Bonus: "<<bonus<<endl;
    cout<<"Total Salary: "<<total<<endl;

    return 0;
}