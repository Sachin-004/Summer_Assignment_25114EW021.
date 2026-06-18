#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    cout<<"Duplicate elements are: ";
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        bool printed = false;
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                printed = true;
                break;
            }
        }

        if (count > 0 && !printed) {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}