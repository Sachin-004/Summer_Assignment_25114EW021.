#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    int maxFreq = 0, ans;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count>maxFreq) {
            maxFreq = count;
            ans = arr[i];
        }
    }
    cout<<"Maximum frequency element = "<<ans;

    return 0;
}