#include <iostream>
using namespace std;

// ?? Department structure
struct Department {
    int dept_id;
    string dept_name;
};

// ?? Employee structure
struct Employee {
    int emp_id;
    string emp_name;
    int dept_id;
    float salary;
};

// ?? Lab 1: VIEW (Employees + Department names)
void viewAllEmployees(Employee e[], int eSize, Department d[], int dSize) {
    cout << "\n--- Employee View (All Employees) ---\n";

    for(int i = 0; i < eSize; i++) {
        for(int j = 0; j < dSize; j++) {
            if(e[i].dept_id == d[j].dept_id) {
                cout << "ID: " << e[i].emp_id
                     << ", Name: " << e[i].emp_name
                     << ", Department: " << d[j].dept_name
                     << ", Salary: " << e[i].salary << endl;
            }
        }
    }
}

// ?? Lab 2: Modified VIEW (Salary >= 50000)
void viewHighSalary(Employee e[], int eSize, Department d[], int dSize) {
    cout << "\n--- Employee View (Salary >= 50000) ---\n";

    for(int i = 0; i < eSize; i++) {
        if(e[i].salary >= 50000) {
            for(int j = 0; j < dSize; j++) {
                if(e[i].dept_id == d[j].dept_id) {
                    cout << "ID: " << e[i].emp_id
                         << ", Name: " << e[i].emp_name
                         << ", Department: " << d[j].dept_name
                         << ", Salary: " << e[i].salary << endl;
                }
            }
        }
    }
}

int main() {

    // Sample data
    Department d[3] = {
        {1, "HR"},
        {2, "IT"},
        {3, "Finance"}
    };

    Employee e[4] = {
        {101, "Rahul", 1, 45000},
        {102, "Priya", 2, 60000},
        {103, "Amit", 2, 55000},
        {104, "Neha", 3, 40000}
    };

    // ?? Lab 1: Show all employees
    viewAllEmployees(e, 4, d, 3);

    // ?? Lab 2: Show employees with salary >= 50000
    viewHighSalary(e, 4, d, 3);

    return 0;
}
