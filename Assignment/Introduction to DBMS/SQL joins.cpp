#include <iostream>
using namespace std;

// ?? Departments table
struct Department {
    int dept_id;
    string dept_name;
};

// ?? Employees table
struct Employee {
    int emp_id;
    string emp_name;
    int dept_id;
};

int main() {

    // Sample data
    Department d[3] = {
        {1, "HR"},
        {2, "IT"},
        {3, "Finance"}
    };

    Employee e[3] = {
        {101, "Rahul", 1},
        {102, "Priya", 2},
        {103, "Amit", 2}
    };

    int deptCount = 3, empCount = 3;

    // ?? Lab 1: INNER JOIN
    cout << "--- INNER JOIN (Employees with Departments) ---\n";
    for(int i = 0; i < empCount; i++) {
        for(int j = 0; j < deptCount; j++) {
            if(e[i].dept_id == d[j].dept_id) {
                cout << "Employee: " << e[i].emp_name
                     << ", Department: " << d[j].dept_name << endl;
            }
        }
    }

    // ?? Lab 2: LEFT JOIN
    cout << "\n--- LEFT JOIN (All Departments) ---\n";
    for(int i = 0; i < deptCount; i++) {
        bool found = false;

        for(int j = 0; j < empCount; j++) {
            if(d[i].dept_id == e[j].dept_id) {
                cout << "Department: " << d[i].dept_name
                     << ", Employee: " << e[j].emp_name << endl;
                found = true;
            }
        }

        // If no employee found
        if(!found) {
            cout << "Department: " << d[i].dept_name
                 << ", Employee: NULL" << endl;
        }
    }

    return 0;
}
