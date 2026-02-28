#include <iostream>
using namespace std;

int main() {
    int target = 42; // You can use rand() % 100 + 1 for a random number
    int guess = 0;

    cout << "Guess the number (1-100): " << endl;

    while (guess != target) {
        cin >> guess;
        if (guess > target) {
            cout << "Too high! Try again: ";
        } else if (guess < target) {
            cout << "Too low! Try again: ";
        }
    }

    cout << "Congratulations! You guessed it." << endl;
    return 0;
}
