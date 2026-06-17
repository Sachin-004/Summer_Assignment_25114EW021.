#include <iostream>
using namespace std;
int main() {
    int arr[100], n, sum = 0;
    float average;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    average = (float)sum / n;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}