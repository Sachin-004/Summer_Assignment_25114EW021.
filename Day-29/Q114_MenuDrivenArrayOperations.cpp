#include <iostream>
using namespace std;
int main() {
    int n, choice, sum = 0;

    cout<<"Enter size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<"\n1. Display Array\n";
    cout<<"2. Find Sum\n";
    cout<<"3. Find Maximum\n";
    cout<<"Enter choice: ";
    cin>>choice;

    if (choice == 1) {
        cout<<"Array: ";
        for (int i = 0; i < n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    else if (choice == 2) {
        for (int i = 0; i < n; i++)
            sum += arr[i];
        cout<<"Sum = "<<sum<<endl;
    }
    else if (choice == 3) {
        int max = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max)
                max = arr[i];
        }
        cout<<"Maximum = "<<max<<endl;
    }
    else {
        cout<<"Invalid Choice!"<<endl;
    }

    return 0;
}