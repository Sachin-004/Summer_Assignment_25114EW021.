#include <iostream>
using namespace std;
int main() {
    int n, sum;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"Enter required sum: ";
    cin>>sum;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout<<"Pair found: "<<arr[i]<<" "<<arr[j]<<endl;
                return 0;
            }
        }
    }
    cout<<"No pair found.";

    return 0;
}