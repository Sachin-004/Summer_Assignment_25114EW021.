#include <iostream>
using namespace std;
int main() {
    int secret = 7, guess;
    cout<<"Guess the number (1-10): ";
    while (true) {
        cin>>guess;
        if (guess == secret) {
            cout<<"Correct! You guessed it."<<endl;
            break;
        }
        else if (guess < secret)
            cout<<"Too low! Try again: ";
        else
            cout<<"Too high! Try again: ";
    }

    return 0;
}