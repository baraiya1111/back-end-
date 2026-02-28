#include <iostream>
using namespace std;

int main() {
   
    int numInt = 10;
    double numDouble = numInt; 

  
    double pi = 3.14;
    int intPi = (int)pi; // Manual 'truncation' of decimals

    cout << "Implicit (int to double): " << numDouble << endl;
    cout << "Explicit (double to int): " << intPi << endl;

    return 0;
}
