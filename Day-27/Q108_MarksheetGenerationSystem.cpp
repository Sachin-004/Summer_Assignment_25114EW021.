#include <iostream>
using namespace std;
int main() {
    string name;
    float m1, m2, m3, total, per;

    cout<< "Enter Student Name: ";
    cin >> name;
    cout << "Enter Marks of 3 Subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    per = total / 3;

    cout<<"\nMarksheet"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Total Marks: "<<total<<endl;
    cout<<"Percentage: "<<per<<"%"<<endl;

    return 0;
}