#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter number of books: ";
    cin>>n;

    int id[n];
    string book[n], author[n];

    for(int i=0; i<n; i++){
        cout<<"\nBook "<<i+1<<endl;
        cout<<"Enter Book ID: ";
        cin>>id[i];
        cout<<"Enter Book Name: ";
        cin>>book[i];
        cout<<"Enter Author Name: ";
        cin>>author[i];
    }
    cout<<"\nLibrary Records\n";

    for(int i=0; i<n; i++){
        cout<<"ID: "<<id[i]<<" Book: "<<book[i]<<" Author: "<<author[i]<<endl;
    }

    return 0;
}