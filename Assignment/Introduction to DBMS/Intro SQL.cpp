#include <iostream>
using namespace std;

// Structure (like table)
struct Student {
    int student_id;
    string student_name;
    int age;
    string student_class;
    string address;
};

int main() {
    // Array of students (like records)
    Student s[5];

    // Insert 5 records
    for(int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << endl;
        cout << "ID: ";
        cin >> s[i].student_id;

        cout << "Name: ";
        cin.ignore();
        getline(cin, s[i].student_name);

        cout << "Age: ";
        cin >> s[i].age;

        cout << "Class: ";
        cin >> s[i].student_class;

        cout << "Address: ";
        cin.ignore();
        getline(cin, s[i].address);

        cout << endl;
    }

    // Display all records (like SELECT *)
    cout << "\n--- Student Records ---\n";
    for(int i = 0; i < 5; i++) {
        cout << "ID: " << s[i].student_id << endl;
        cout << "Name: " << s[i].student_name << endl;
        cout << "Age: " << s[i].age << endl;
        cout << "Class: " << s[i].student_class << endl;
        cout << "Address: " << s[i].address << endl;
        cout << "----------------------\n";
    }

    return 0;
}
