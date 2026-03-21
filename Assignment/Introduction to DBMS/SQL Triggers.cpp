#include <iostream>
#include <ctime>
using namespace std;

// ?? Employee structure
struct Employee {
    int emp_id;
    string emp_name;
    float salary;
    string last_modified;
};

// ?? Log function (Trigger for INSERT)
void logInsert(Employee e) {
    cout << "Trigger: New employee added -> "
         << e.emp_id << " " << e.emp_name << endl;
}

// ?? Function to get current time
string getCurrentTime() {
    time_t now = time(0);
    return ctime(&now);
}

// ?? Trigger for UPDATE (update timestamp)
void updateTimestamp(Employee &e) {
    e.last_modified = getCurrentTime();
}

int main() {
    Employee emp[5];
    int n = 0;

    // ?? Lab 1: INSERT + Trigger
    cout << "Adding 2 employees:\n";
    for(int i = 0; i < 2; i++) {
        cout << "ID: ";
        cin >> emp[n].emp_id;

        cout << "Name: ";
        cin >> emp[n].emp_name;

        cout << "Salary: ";
        cin >> emp[n].salary;

        emp[n].last_modified = getCurrentTime();

        // Trigger fires automatically
        logInsert(emp[n]);

        n++;
    }

    // ?? Lab 2: UPDATE + Trigger
    int id;
    cout << "\nEnter Employee ID to update salary: ";
    cin >> id;

    for(int i = 0; i < n; i++) {
        if(emp[i].emp_id == id) {
            cout << "Enter new salary: ";
            cin >> emp[i].salary;

            // Trigger fires automatically
            updateTimestamp(emp[i]);

            cout << "Record updated! Timestamp changed.\n";
        }
    }

    // ?? Display data
    cout << "\n--- Employee Records ---\n";
    for(int i = 0; i < n; i++) {
        cout << emp[i].emp_id << " "
             << emp[i].emp_name << " "
             << emp[i].salary << " "
             << emp[i].last_modified << endl;
    }

    return 0;
}
