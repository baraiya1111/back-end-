#include <iostream>
using namespace std;

// ?? Employee structure
struct Employee {
    int emp_id;
    string emp_name;
    float salary;
};

// ?? Course structure
struct Course {
    int course_id;
    string course_name;
};

int main() {

    // ?? Sample Employee data
    Employee e[3] = {
        {101, "Rahul", 30000},
        {102, "Priya", 40000},
        {103, "Amit", 35000}
    };

    // ?? Sample Course data
    Course c[3] = {
        {1, "C++"},
        {2, "Java"},
        {3, "Python"}
    };

    // ?? Lab 1: Explicit Cursor (Employees)
    cout << "--- Employee Details (Cursor) ---\n";

    int i = 0; // cursor position
    while(i < 3) {
        // FETCH record
        cout << "ID: " << e[i].emp_id << endl;
        cout << "Name: " << e[i].emp_name << endl;
        cout << "Salary: " << e[i].salary << endl;
        cout << "----------------------\n";

        i++; // move cursor
    }

    // ?? Lab 2: Cursor for Courses
    cout << "\n--- Course Details (Cursor) ---\n";

    int j = 0;
    while(j < 3) {
        cout << "Course ID: " << c[j].course_id << endl;
        cout << "Course Name: " << c[j].course_name << endl;
        cout << "----------------------\n";

        j++; // move cursor
    }

    return 0;
}
