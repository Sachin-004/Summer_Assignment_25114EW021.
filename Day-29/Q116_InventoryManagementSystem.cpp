#include <iostream>
using namespace std;
int main() {
    int id, quantity;
    string item;
    float price;

    cout<<"Enter Item ID: ";
    cin>>id;
    cout<<"Enter Item Name: ";
    cin>>item;
    cout<<"Enter Quantity: ";
    cin>>quantity;

    cout<<"Enter Price: ";
    cin>>price;

    cout<<"\nInventory Details"<<endl;
    cout<<"Item ID: "<<id<<endl;
    cout<<"Item Name: "<<item<<endl;
    cout<<"Quantity: "<<quantity<<endl;
    cout<<"Price: "<<price<<endl;

    return 0;
}