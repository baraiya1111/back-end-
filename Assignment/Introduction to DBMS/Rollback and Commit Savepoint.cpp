#include <iostream>
using namespace std;

struct Course {
    int id;
    string name;
};

int main() {
    Course c[10], savepoint[10], committed[10];
    int n = 0, sp_n = 0, com_n = 0;

    // ?? Initial Insert
    cout << "Insert 2 courses:\n";
    for(int i = 0; i < 2; i++) {
        cin >> c[n].id >> c[n].name;
        n++;
    }

    // ?? Lab 1: Create SAVEPOINT
    for(int i = 0; i < n; i++) {
        savepoint[i] = c[i];
    }
    sp_n = n;
    cout << "\nSAVEPOINT created!\n";

    // Insert more records
    cout << "Insert 2 more courses:\n";
    for(int i = 0; i < 2; i++) {
        cin >> c[n].id >> c[n].name;
        n++;
    }

    // ROLLBACK to SAVEPOINT
    for(int i = 0; i < sp_n; i++) {
        c[i] = savepoint[i];
    }
    n = sp_n;
    cout << "Rolled back to SAVEPOINT!\n";

    // ?? Lab 2: Insert again
    cout << "\nInsert 2 courses again:\n";
    for(int i = 0; i < 2; i++) {
        cin >> c[n].id >> c[n].name;
        n++;
    }

    // COMMIT part of data
    for(int i = 0; i < n; i++) {
        committed[i] = c[i];
    }
    com_n = n;
    cout << "Data COMMITTED!\n";

    // Insert more (temporary)
    cout << "Insert 1 more course:\n";
    cin >> c[n].id >> c[n].name;
    n++;

    // ROLLBACK remaining changes
    for(int i = 0; i < com_n; i++) {
        c[i] = committed[i];
    }
    n = com_n;
    cout << "Rolled back uncommitted changes!\n";

    // ?? Final Data
    cout << "\n--- Final Courses ---\n";
    for(int i = 0; i < n; i++) {
        cout << c[i].id << " " << c[i].name << endl;
    }

    return 0;
}
