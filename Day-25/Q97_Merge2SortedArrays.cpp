#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    int a[n1];
    cout<<"Enter elements: ";
    for (int i = 0; i < n1; i++)
        cin>>a[i];
    cout<<"Enter size of second array: ";
    cin>>n2;
    int b[n2];

    cout<<"Enter elements: ";
    for (int i = 0; i < n2; i++)
        cin>>b[i];
    cout<<"Merged array: ";
    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j])
            cout<<a[i++]<<" ";
        else
            cout<<b[j++]<<" ";
    }

    while (i < n1)
        cout<<a[i++]<<" ";

    while (j < n2)
        cout<<b[j++]<<" ";

    cout<<endl;

    return 0;
}