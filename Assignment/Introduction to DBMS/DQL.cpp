#include <iostream>
using namespace std;

struct Course {
    int course_id;
    string course_name;
    int course_duration;
};

int main() {
    Course c[5] = {
        {1, "C++", 3},
        {2, "Java", 5},
        {3, "Python", 4},
        {4, "SQL", 2},
        {5, "HTML", 1}
    };

    int n = 5;

    // ?? Lab 1: SELECT * (Display all courses)
    cout << "--- All Courses ---\n";
    for(int i = 0; i < n; i++) {
        cout << c[i].course_id << " "
             << c[i].course_name << " "
             << c[i].course_duration << endl;
    }

    // ?? Lab 2: ORDER BY course_duration DESC (Sorting)
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(c[i].course_duration < c[j].course_duration) {
                // Swap
                Course temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    cout << "\n--- Courses Sorted by Duration (DESC) ---\n";
    for(int i = 0; i < n; i++) {
        cout << c[i].course_id << " "
             << c[i].course_name << " "
             << c[i].course_duration << endl;
    }

    // ?? Lab 3: LIMIT 2 (Top 2 courses)
    cout << "\n--- Top 2 Courses ---\n";
    for(int i = 0; i < 2; i++) {
        cout << c[i].course_id << " "
             << c[i].course_name << " "
             << c[i].course_duration << endl;
    }

    return 0;
}
