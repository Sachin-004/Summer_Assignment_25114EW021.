#include <iostream>
using namespace std;
int main() {
    string name;
    int tickets;
    float price = 200, total;

    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Number of Tickets: ";
    cin>>tickets;

    total = tickets * price;

    cout<<"\nTicket Details"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Tickets: "<<tickets<<endl;
    cout<<"Total Amount: "<<total<<endl;

    return 0;
}