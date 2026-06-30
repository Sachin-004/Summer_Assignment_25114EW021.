#include <iostream>
using namespace std;
int main() {
    string str;
    int choice, len = 0;

    cout<<"Enter a string: ";
    cin>>str;

    cout<<"\n1. Display String"<<endl;
    cout<<"2. Find Length"<<endl;
    cout<<"3. Reverse String"<<endl;
    cout<<"Enter choice: ";
    cin>>choice;

    if (choice == 1) {
        cout<<"String: "<<str<<endl;
    }
    else if (choice == 2) {
        while (str[len] != '\0')
            len++;
        cout<<"Length = "<<len<<endl;
    }
    else if (choice == 3) {
        for (int i = str.length() - 1; i >= 0; i--)
            cout<<str[i];
        cout<<endl;
    }
    else {
        cout<<"Invalid Choice!"<<endl;
    }

    return 0;
}