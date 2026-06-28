#include <iostream>
using namespace std;
int main() {
    char str[100], longest[100];
    int max = 0, len = 0, start = 0;
    cout<<"Enter a sentence: ";
    cin.getline(str, 100);
    for (int i = 0;; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (len > max) {
                max = len;
                for (int j = 0; j < len; j++)
                    longest[j] = str[start + j];
                longest[len] = '\0';
            }
            start = i + 1;
            len = 0;
            if (str[i] == '\0')
                break;
        } else {
            len++;
        }
    }

    cout<<"Longest word: "<<longest<<endl;

    return 0;
}