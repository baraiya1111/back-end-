#include <iostream>
using namespace std;

// ?? Modified structure (Added course_duration)
struct Course {
    int course_id;
    string course_name;
    int course_credits;
    int course_duration; // New column added
};

int main() {
    Course c[2];

    for(int i = 0; i < 2; i++) {
        cout << "\nEnter Course Details:\n";

        cout << "ID: ";
        cin >> c[i].course_id;

        cout << "Name: ";
        cin >> c[i].course_name;

        cout << "Credits: ";
        cin >> c[i].course_credits;

        cout << "Duration (months): ";
        cin >> c[i].course_duration;
    }

    cout << "\n--- Course Records ---\n";
    for(int i = 0; i < 2; i++) {
        cout << c[i].course_id << " "
             << c[i].course_name << " "
             << c[i].course_credits << " "
             << c[i].course_duration << endl;
    }

    return 0;
}
