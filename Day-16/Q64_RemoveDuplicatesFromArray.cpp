#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<"Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 0) {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;

    return 0;
}