#include <iostream>
using namespace std;

struct Teacher {
    int teacher_id;
    string teacher_name;
    string subject;
    string email;
};

struct Student {
    int student_id;
    string student_name;
    int teacher_id; // Foreign Key
};

int main() {
    Teacher t[3];
    Student s[3];

    // ?? Insert Teachers (with constraints)
    for(int i = 0; i < 3; i++) {
        cout << "\nEnter Teacher " << i+1 << " Details:\n";

        cout << "Teacher ID: ";
        cin >> t[i].teacher_id;

        // PRIMARY KEY check
        for(int j = 0; j < i; j++) {
            if(t[i].teacher_id == t[j].teacher_id) {
                cout << "Error: Duplicate Teacher ID!\n";
                i--;
                goto nextTeacher;
            }
        }

        cout << "Name: ";
        cin >> t[i].teacher_name;
        if(t[i].teacher_name == "") {
            cout << "Error: Name cannot be NULL!\n";
            i--;
            goto nextTeacher;
        }

        cout << "Subject: ";
        cin >> t[i].subject;
        if(t[i].subject == "") {
            cout << "Error: Subject cannot be NULL!\n";
            i--;
            goto nextTeacher;
        }

        cout << "Email: ";
        cin >> t[i].email;

        // UNIQUE email check
        for(int j = 0; j < i; j++) {
            if(t[i].email == t[j].email) {
                cout << "Error: Duplicate Email!\n";
                i--;
                goto nextTeacher;
            }
        }

        nextTeacher:;
    }

    // ?? Insert Students (FOREIGN KEY check)
    for(int i = 0; i < 3; i++) {
        cout << "\nEnter Student " << i+1 << " Details:\n";

        cout << "Student ID: ";
        cin >> s[i].student_id;

        cout << "Name: ";
        cin >> s[i].student_name;

        cout << "Teacher ID (FK): ";
        cin >> s[i].teacher_id;

        bool found = false;
        for(int j = 0; j < 3; j++) {
            if(s[i].teacher_id == t[j].teacher_id) {
                found = true;
                break;
            }
        }

        if(!found) {
            cout << "Error: Teacher ID does not exist (Foreign Key violation)!\n";
            i--;
        }
    }

    // ?? Display Data
    cout << "\n--- Teachers ---\n";
    for(int i = 0; i < 3; i++) {
        cout << t[i].teacher_id << " "
             << t[i].teacher_name << " "
             << t[i].subject << " "
             << t[i].email << endl;
    }

    cout << "\n--- Students ---\n";
    for(int i = 0; i < 3; i++) {
        cout << s[i].student_id << " "
             << s[i].student_name << " "
             << s[i].teacher_id << endl;
    }

    return 0;
}
