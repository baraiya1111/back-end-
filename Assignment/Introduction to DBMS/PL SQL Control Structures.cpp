#include <iostream>
using namespace std;

// ?? Employee structure
struct Employee {
    int emp_id;
    string emp_name;
    int dept_id;
};

int main() {

    // Sample data
    Employee e[4] = {
        {101, "Rahul", 1},
        {102, "Priya", 2},
        {103, "Amit", 1},
        {104, "Neha", 3}
    };

    int n = 4;

    // ?? Lab 1: IF-THEN (Check department)
    int check_id;
    cout << "Enter Employee ID to check department: ";
    cin >> check_id;

    for(int i = 0; i < n; i++) {
        if(e[i].emp_id == check_id) {
            
            // IF-THEN condition
            if(e[i].dept_id == 1) {
                cout << "Employee belongs to HR Department\n";
            }
            else if(e[i].dept_id == 2) {
                cout << "Employee belongs to IT Department\n";
            }
            else {
                cout << "Employee belongs to Other Department\n";
            }
        }
    }

    // ?? Lab 2: FOR LOOP (Display all employee names)
    cout << "\n--- Employee Names ---\n";
    for(int i = 0; i < n; i++) {
        cout << e[i].emp_name << endl;
    }

    return 0;
}
