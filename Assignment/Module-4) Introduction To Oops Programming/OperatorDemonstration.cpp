#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

  
    cout << "Addition: " << a + b << endl;
    cout << "Modulus (Remainder): " << a % b << endl;

    
    cout << "Is a > b? " << (a > b) << endl;

  
    bool result = (a > 5 && b < 5);
    cout << "Logical AND Result: " << result << endl;

  
    cout << "Bitwise AND (10 & 3): " << (a & b) << endl; 

    return 0;
}
