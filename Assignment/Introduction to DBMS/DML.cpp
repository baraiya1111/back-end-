#include <iostream>
using namespace std;

struct Course {
    int course_id;
    string course_name;
    int course_duration;
};

int main() {
    Course c[5];
    int n = 3; // number of records

    // ?? Lab 1: INSERT (Add 3 records)
    cout << "Enter 3 Course Records:\n";
    for(int i = 0; i < n; i++) {
        cout << "\nCourse " << i+1 << ":\n";
        cout << "ID: ";
        cin >> c[i].course_id;

        cout << "Name: ";
        cin >> c[i].course_name;

        cout << "Duration: ";
        cin >> c[i].course_duration;
    }

    // Display records
    cout << "\n--- Course Records ---\n";
    for(int i = 0; i < n; i++) {
        cout << c[i].course_id << " "
             << c[i].course_name << " "
             << c[i].course_duration << endl;
    }

    // ?? Lab 2: UPDATE (Modify duration)
    int update_id;
    cout << "\nEnter Course ID to update duration: ";
    cin >> update_id;

    for(int i = 0; i < n; i++) {
        if(c[i].course_id == update_id) {
            cout << "Enter new duration: ";
            cin >> c[i].course_duration;
            cout << "Record updated successfully!\n";
        }
    }

    // ?? Lab 3: DELETE (Remove record)
    int delete_id;
    cout << "\nEnter Course ID to delete: ";
    cin >> delete_id;

    for(int i = 0; i < n; i++) {
        if(c[i].course_id == delete_id) {
            for(int j = i; j < n-1; j++) {
                c[j] = c[j+1]; // shift records
            }
            n--; // reduce count
            cout << "Record deleted successfully!\n";
            break;
        }
    }

    // ?? Final Display
    cout << "\n--- Updated Course Records ---\n";
    for(int i = 0; i < n; i++) {
        cout << c[i].course_id << " "
             << c[i].course_name << " "
             << c[i].course_duration << endl;
    }

    return 0;
}
