#include <iostream>
using namespace std;
int main() {
    char str1[100], str2[100];
    cout<<"Enter first string: ";
    cin.getline(str1, 100);
    cout <<"Enter second string: ";
    cin.getline(str2, 100);
    int n = 0;
    while (str1[n] != '\0')
        n++;
    bool rotation = false;
    for (int k = 0; k < n; k++) {
        bool same = true;
        for (int i = 0; i < n; i++) {
            if (str1[(i + k) % n] != str2[i]) {
                same = false;
                break;
            }
        }
        if (same) {
            rotation = true;
            break;
        }
    }

    if (rotation)
        cout<<"Strings are rotations."<<endl;
    else
        cout<<"Strings are not rotations."<<endl;

    return 0;
}