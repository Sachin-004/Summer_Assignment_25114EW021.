#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter number of employees: ";
    cin>>n;

    int id[n];
    string name[n];
    float salary[n];
    for(int i=0; i<n; i++){
        cout<<"\nEmployee "<<i+1<<endl;
        cout<<"Enter Employee ID: ";
        cin>>id[i];
        cout<<"Enter Employee Name: ";
        cin>>name[i];
        cout<<"Enter Salary: ";
        cin>>salary[i];
    }
    cout<<"\nEmployee records\n";

    for(int i=0; i<n; i++){
        cout<<"ID: "<<id[i]<<" Name: "<<name[i]<<" Salary: "<<salary[i]<<endl;
    }

    return 0;
}