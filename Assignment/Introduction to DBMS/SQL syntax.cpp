#include <iostream>
using namespace std;

struct Student {
    int student_id;
    string student_name;
    int age;
    string student_class;
    string address;
};

int main() {
    Student s[5] = {
        {1, "Rahul", 15, "10th", "Ahmedabad"},
        {2, "Priya", 9, "4th", "Surat"},
        {3, "Amit", 16, "11th", "Vadodara"},
        {4, "Neha", 8, "3rd", "Rajkot"},
        {5, "Ravi", 14, "9th", "Bhavnagar"}
    };

    // ?? Lab 1: Display student_name and age
    cout << "--- Student Name and Age ---\n";
    for(int i = 0; i < 5; i++) {
        cout << "Name: " << s[i].student_name 
             << ", Age: " << s[i].age << endl;
    }

    // ?? Lab 2: Display students with age > 10
    cout << "\n--- Students with Age > 10 ---\n";
    for(int i = 0; i < 5; i++) {
        if(s[i].age > 10) {
            cout << "ID: " << s[i].student_id << endl;
            cout << "Name: " << s[i].student_name << endl;
            cout << "Age: " << s[i].age << endl;
            cout << "Class: " << s[i].student_class << endl;
            cout << "Address: " << s[i].address << endl;
            cout << "----------------------\n";
        }
    }

    return 0;
}
