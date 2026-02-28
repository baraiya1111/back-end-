#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);l
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    if (num < 0)
        cout << "Factorial of negative numbers doesn't exist." << endl;
    else
        cout << "Factorial of " << num << " = " << factorial(num) << endl;

    return 0;
}
