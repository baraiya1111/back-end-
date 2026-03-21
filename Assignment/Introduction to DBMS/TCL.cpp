#include <iostream>
using namespace std;

struct Course {
    int course_id;
    string course_name;
};

int main() {
    Course c[10], backup[10], savepoint[10];
    int n = 0, backup_n = 0, save_n = 0;

    // ?? Lab 1: INSERT + COMMIT
    cout << "Insert 2 courses:\n";
    for(int i = 0; i < 2; i++) {
        cout << "ID: ";
        cin >> c[n].course_id;
        cout << "Name: ";
        cin >> c[n].course_name;
        n++;
    }

    // COMMIT (save to backup)
    for(int i = 0; i < n; i++) {
        backup[i] = c[i];
    }
    backup_n = n;

    cout << "\nData COMMITTED successfully!\n";

    // ?? Lab 2: INSERT + ROLLBACK
    cout << "\nInsert 1 more course:\n";
    cout << "ID: ";
    cin >> c[n].course_id;
    cout << "Name: ";
    cin >> c[n].course_name;
    n++;

    // ROLLBACK (restore backup)
    for(int i = 0; i < backup_n; i++) {
        c[i] = backup[i];
    }
    n = backup_n;

    cout << "ROLLBACK done! Last insert undone.\n";

    // ?? Lab 3: SAVEPOINT + UPDATE + ROLLBACK
    // Create SAVEPOINT
    for(int i = 0; i < n; i++) {
        savepoint[i] = c[i];
    }
    save_n = n;

    cout << "\nUpdating first course name...\n";
    c[0].course_name = "UpdatedCourse";

    // Rollback to SAVEPOINT
    for(int i = 0; i < save_n; i++) {
        c[i] = savepoint[i];
    }
    n = save_n;

    cout << "Rolled back to SAVEPOINT!\n";

    // ?? Final Data
    cout << "\n--- Final Courses ---\n";
    for(int i = 0; i < n; i++) {
        cout << c[i].course_id << " " << c[i].course_name << endl;
    }

    return 0;
}
