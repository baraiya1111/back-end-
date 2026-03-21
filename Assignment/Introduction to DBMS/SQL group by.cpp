#include <iostream>
using namespace std;

// ?? Employee structure
struct Employee {
    int emp_id;
    string emp_name;
    int dept_id;
    float salary;
};

int main() {

    // Sample data
    Employee e[5] = {
        {101, "Rahul", 1, 30000},
        {102, "Priya", 2, 40000},
        {103, "Amit", 2, 35000},
        {104, "Neha", 1, 32000},
        {105, "Ravi", 3, 28000}
    };

    int empCount = 5;

    // ?? Lab 1: GROUP BY + COUNT
    cout << "--- Employee Count by Department ---\n";

    for(int i = 1; i <= 3; i++) { // assuming dept_id 1 to 3
        int count = 0;

        for(int j = 0; j < empCount; j++) {
            if(e[j].dept_id == i) {
                count++;
            }
        }

        cout << "Department " << i << ": " << count << " employees\n";
    }

    // ?? Lab 2: GROUP BY + AVG(salary)
    cout << "\n--- Average Salary by Department ---\n";

    for(int i = 1; i <= 3; i++) {
        int count = 0;
        float sum = 0;

        for(int j = 0; j < empCount; j++) {
            if(e[j].dept_id == i) {
                sum += e[j].salary;
                count++;
            }
        }

        if(count > 0) {
            cout << "Department " << i 
                 << ": Average Salary = " << (sum / count) << endl;
        } else {
            cout << "Department " << i << ": No employees\n";
        }
    }

    return 0;
}
