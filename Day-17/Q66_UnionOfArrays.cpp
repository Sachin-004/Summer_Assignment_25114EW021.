#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cout<<"Enter size of first array: ";
    cin>>n1;
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
    cout<<"Union of arrays: ";
    // Print first array
    for (int i = 0; i < n1; i++)
        cout<<a[i]<<" ";
    // Print only unique elements from second array
    for (int i = 0; i < n2; i++) {
        int found = 0;
        for (int j = 0; j < n1; j++) {
            if (b[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0)
            cout<<b[i]<<" ";
    }
    cout<<endl;

    return 0;
}