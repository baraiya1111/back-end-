#include <iostream>
#include <string>
#include <algorithm> // for reverse()

using namespace std;

int main() {
    string str, rev;
    cout << "Enter a string: ";
    cin >> str;

    rev = str; 
    reverse(rev.begin(), rev.end()); // Flips the string

    if (str == rev) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
