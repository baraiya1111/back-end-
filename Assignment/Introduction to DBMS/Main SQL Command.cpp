#include <iostream>
using namespace std;

// ?? CREATE TABLE courses (DDL)
struct Course {
    int course_id;          // PRIMARY KEY
    string course_name;
    int course_credits;
};

int main() {
    // ?? CREATE DATABASE university_db (concept)
    cout << "Database 'university_db' created successfully!\n";

    Course c[3];

    // ?? Insert course records with PRIMARY KEY constraint
    for(int i = 0; i < 3; i++) {
        cout << "\nEnter details for Course " << i+1 << endl;

        cout << "Course ID: ";
        cin >> c[i].course_id;

        // PRIMARY KEY check (no duplicate IDs)
        for(int j = 0; j < i; j++) {
            if(c[i].course_id == c[j].course_id) {
                cout << "Error: Duplicate Course ID (PRIMARY KEY violation)\n";
                i--;
                goto repeat;
            }
        }

        cout << "Course Name: ";
        cin >> c[i].course_name;

        cout << "Course Credits: ";
        cin >> c[i].course_credits;

        if(c[i].course_credits <= 0) {
            cout << "Error: Credits must be positive\n";
            i--;
        }

        repeat:;
    }

    // ?? Display all courses (like SELECT *)
    cout << "\n--- Course Records ---\n";
    for(int i = 0; i < 3; i++) {
        cout << "ID: " << c[i].course_id << endl;
        cout << "Name: " << c[i].course_name << endl;
        cout << "Credits: " << c[i].course_credits << endl;
        cout << "----------------------\n";
    }

    return 0;
}
