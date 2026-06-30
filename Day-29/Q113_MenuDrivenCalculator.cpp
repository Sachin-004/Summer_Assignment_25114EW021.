#include <iostream>
using namespace std;
int main() {
    int choice;
    float a, b;

    cout<<"1. Add\n";
    cout<< "2. Subtract\n";
    cout<< "3. Multiply\n";
    cout<< "4. Divide\n";
    cout<< "Enter your choice: ";
    cin>>choice;

    cout<<"Enter two numbers: ";
    cin>>a >> b;

    if (choice == 1)
        cout<<"Answer = "<<a + b<<endl;
    else if (choice == 2)
        cout<<"Answer = "<<a - b<<endl;
    else if (choice == 3)
        cout<<"Answer = "<<a * b<<endl;
    else if (choice == 4)
        cout<<"Answer = "<<a / b<<endl;
    else
        cout<<"Invalid Choice!"<<endl;

    return 0;
}