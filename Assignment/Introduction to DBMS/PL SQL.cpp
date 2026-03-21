#include <iostream>
using namespace std;

// ?? Employee structure
struct Employee {
    int emp_id;
    string emp_name;
};

// ?? Orders structure
struct Order {
    int order_id;
    float amount;
};

int main() {

    // ?? Lab 1: Total number of employees
    Employee e[4] = {
        {101, "Rahul"},
        {102, "Priya"},
        {103, "Amit"},
        {104, "Neha"}
    };

    int empCount = 4;

    cout << "--- Total Employees ---\n";
    cout << "Total Employees: " << empCount << endl;

    // ?? Lab 2: Total sales from orders table
    Order o[4] = {
        {1, 1000},
        {2, 2000},
        {3, 1500},
        {4, 2500}
    };

    float totalSales = 0;

    for(int i = 0; i < 4; i++) {
        totalSales += o[i].amount;
    }

    cout << "\n--- Total Sales ---\n";
    cout << "Total Sales Amount: " << totalSales << endl;

    return 0;
}
