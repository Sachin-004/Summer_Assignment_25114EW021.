#include<iostream>
using namespace std;
int main() {
    int start, end, num, original, digit, sum;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    for(num=start; num<=end; num++) {
        original = num;
        sum = 0;

        while(original!=0) {
            digit = original % 10;
            sum = sum+(digit*digit*digit);
            original = original/10;
        }

        if(sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}