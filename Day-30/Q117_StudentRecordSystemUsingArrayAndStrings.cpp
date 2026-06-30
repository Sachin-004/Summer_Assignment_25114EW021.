#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter number of students: ";
    cin>>n;

    int roll[n];
    string name[n];
    float marks[n];
    for(int i=0; i<n; i++){
        cout<<"\nstudent "<<i+1<<endl;
        cout<<"Enter Roll No: ";
        cin>>roll[i];
        cout<<"Enter Name: ";
        cin>>name[i];
        cout<<"Enter Marks: ";
        cin>>marks[i];
    }
    cout<<"\nStudent records\n";

    for(int i=0; i<n; i++){
        cout<<"Roll no: "<<roll[i]<<" Name: "<<name[i]<<" Marks: "<<marks[i]<<endl;
    }

    return 0;
}