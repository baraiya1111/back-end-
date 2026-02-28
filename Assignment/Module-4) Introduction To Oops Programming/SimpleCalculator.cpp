#include <iostream>
using namespace std;


double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double x, y;
    char op;

    cout << "Enter expression (e.g., 10 + 5): ";
    cin >> x >> op >> y;

    switch(op) {
        case '+': cout << "Result: " << add(x, y) << endl; break;
        case '-': cout << "Result: " << subtract(x, y) << endl; break;
        case '*': cout << "Result: " << multiply(x, y) << endl; break;
        case '/': cout << "Result: " << divide(x, y) << endl; break;
        default: cout << "Invalid operator!" << endl;
    }

    return 0;
}
