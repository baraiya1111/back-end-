#include <iostream>
#include <string>

using namespace std;

// --- OOP SECTION ---
// We define a 'Class' which acts as a blueprint for a Rectangle object
class Rectangle {
public:
    double length;
    double width;

    // A 'Method' (function) inside the class to calculate area
    double getArea() {
        return length * width;
    }
};


double calculateAreaPOP(double l, double w) {
    return l * w;
}

int main() {
   
    string name;
    int age;
    cout << "--- Section 1: User Info ---" << endl;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Hello " << name << "! Welcome to C++ at age " << age << "." << endl << endl;

   
    double l = 10.0, w = 5.0;
    cout << "--- Section 2: POP vs OOP Area ---" << endl;
    
 
    cout << "Procedural Area: " << calculateAreaPOP(l, w) << endl;

   
    Rectangle myRect; 
    myRect.length = l;
    myRect.width = w;
    cout << "Object-Oriented Area: " << myRect.getArea() << endl << endl;

  
    int num1, num2;
    cout << "--- Section 3: Addition Test ---" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "The sum is: " << (num1 + num2) << endl;

    return 0;
}
