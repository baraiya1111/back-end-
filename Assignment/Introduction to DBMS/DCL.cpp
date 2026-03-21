#include <iostream>
using namespace std;

// ?? User structure
struct User {
    string username;
    bool canSelect;
    bool canInsert;
};

int main() {
    // ?? Lab 1: Create users
    User user1 = {"user1", false, false};
    User user2 = {"user2", false, false};

    // GRANT SELECT to user1
    user1.canSelect = true;

    cout << "--- After GRANT SELECT to user1 ---\n";
    cout << user1.username << " SELECT: " << user1.canSelect << endl;
    cout << user2.username << " SELECT: " << user2.canSelect << endl;

    // ?? Lab 2: REVOKE INSERT from user1 and GRANT to user2
    user1.canInsert = false; // REVOKE
    user2.canInsert = true;  // GRANT

    cout << "\n--- After REVOKE & GRANT ---\n";
    cout << user1.username << " INSERT: " << user1.canInsert << endl;
    cout << user2.username << " INSERT: " << user2.canInsert << endl;

    // ?? Simulate access check
    cout << "\n--- Permission Check ---\n";

    if(user1.canSelect) {
        cout << "user1 can SELECT from courses table\n";
    } else {
        cout << "user1 cannot SELECT\n";
    }

    if(user1.canInsert) {
        cout << "user1 can INSERT\n";
    } else {
        cout << "user1 cannot INSERT\n";
    }

    if(user2.canInsert) {
        cout << "user2 can INSERT\n";
    } else {
        cout << "user2 cannot INSERT\n";
    }

    return 0;
}
