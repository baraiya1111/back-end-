#include <iostream>
using namespace std;

// ?? Employee structure
struct Employee {
    int emp_id;
    string emp_name;
    int dept_id;
};

// ?? Course structure
struct Course {
    int course_id;
    string course_name;
    int duration;
};

// ?? Lab 1: Stored Procedure (Get employees by department)
void getEmployeesByDept(Employee e[], int size, int dept_id) {
    cout << "\nEmployees in Department " << dept_id << ":\n";
    bool found = false;

    for(int i = 0; i < size; i++) {
        if(e[i].dept_id == dept_id) {
            cout << e[i].emp_id << " " << e[i].emp_name << endl;
            found = true;
        }
    }

    if(!found) {
        cout << "No employees found.\n";
    }
}

// ?? Lab 2: Stored Procedure (Get course by ID)
void getCourseById(Course c[], int size, int course_id) {
    cout << "\nCourse Details:\n";
    bool found = false;

    for(int i = 0; i < size; i++) {
        if(c[i].course_id == course_id) {
            cout << "ID: " << c[i].course_id << endl;
            cout << "Name: " << c[i].course_name << endl;
            cout << "Duration: " << c[i].duration << endl;
            found = true;
        }
    }

    if(!found) {
        cout << "Course not found.\n";
    }
}

int main() {

    // Sample data
    Employee e[4] = {
        {101, "Rahul", 1},
        {102, "Priya", 2},
        {103, "Amit", 1},
        {104, "Neha", 3}
    };

    Course c[3] = {
        {1, "C++", 3},
        {2, "Java", 4},
        {3, "Python", 5}
    };

    // ?? Call stored procedure (Lab 1)
    int dept;
    cout << "Enter Department ID: ";
    cin >> dept;
    getEmployeesByDept(e, 4, dept);

    // ?? Call stored procedure (Lab 2)
    int cid;
    cout << "\nEnter Course ID: ";
    cin >> cid;
    getCourseById(c, 3, cid);

    return 0;
}2
