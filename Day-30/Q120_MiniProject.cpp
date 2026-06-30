#include<iostream>
using namespace std;

void input(string name[], int roll[], float marks[], int n){
    for(int i=0; i<n; i++){
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Enter Roll No: ";
        cin>>roll[i];
        cout<<"Enter Name: ";
        cin>>name[i];
        cout<<"Enter Marks: ";
        cin>>marks[i];
    }
}

void display(string name[], int roll[], float marks[], int n){
    cout<<"\nStudent records\n";
    for(int i=0; i<n; i++){
        cout<<"Roll no: "<<roll[i]<<" Name: "<<name[i]<<" Marks: "<<marks[i]<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;

    string name[n];
    int roll[n];
    float marks[n];

    input(name, roll, marks, n);
    display(name, roll, marks, n);

    return 0;
}