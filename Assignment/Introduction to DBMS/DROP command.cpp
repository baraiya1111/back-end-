#include <iostream>
using namespace std;

// ?? Tables (Structures)
struct Teacher {
    int id;
    string name;
};

struct Student {
    int id;
    string name;
};

// Flags to simulate table existence
bool teachersExists = true;
bool studentsExists = true;

int main() {

    // ?? Lab 1: DROP teachers table
    cout << "Dropping 'teachers' table...\n";
    teachersExists = false;

    if(!teachersExists) {
        cout << "teachers table dropped successfully!\n";
    }

    // ?? Lab 2: DROP students table
    cout << "\nDropping 'students' table...\n";
    studentsExists = false;

    // ?? Verify table removal
    cout << "\n--- Verifying Tables ---\n";

    if(!studentsExists) {
        cout << "students table does NOT exist (dropped successfully)\n";
    } else {
        cout << "students table still exists\n";
    }

    if(!teachersExists) {
        cout << "teachers table does NOT exist (dropped successfully)\n";
    } else {
        cout << "teachers table still exists\n";
    }

    return 0;
}
