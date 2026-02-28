#include <iostream>
using namespace std;


int counter = 10;

void showScope() {
  
    int counter = 5; 
    cout << "Local counter inside function: " << counter << endl;
    cout << "Global counter using scope resolution (::): " << ::counter << endl;
}

int main() {
    int localMain = 20;
    cout << "Global counter in main: " << counter << endl;
    cout << "Local variable in main: " << localMain << endl;
    showScope();
    return 0;
}
