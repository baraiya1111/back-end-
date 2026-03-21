#include <iostream>
using namespace std;

struct Nobel {
    int year;
    string subject;
    string winner;
    string country;
    string category;
};

int main() {

    // Sample Data
    Nobel n[10] = {
        {1970, "Physics", "Hannes Alfven", "Sweden", "Scientist"},
        {1970, "Chemistry", "Luis Federico Leloir", "France", "Scientist"},
        {1970, "Literature", "Aleksandr Solzhenitsyn", "Russia", "Linguist"},
        {1971, "Physics", "Dennis Gabor", "Hungary", "Scientist"},
        {1971, "Chemistry", "Gerhard Herzberg", "Germany", "Scientist"},
        {1971, "Literature", "Pablo Neruda", "Chile", "Linguist"},
        {1972, "Chemistry", "Louis Neel", "France", "Scientist"},
        {1973, "Chemistry", "Louis Pasteur", "France", "Scientist"},
        {1974, "Physics", "Max Planck", "Germany", "Scientist"},
        {1975, "Chemistry", "John Smith", "USA", "Scientist"}
    };

    int size = 10;

    // ?? Query 1: Winners of 1970
    cout << "\n--- Nobel Winners of 1970 ---\n";
    for(int i = 0; i < size; i++) {
        if(n[i].year == 1970) {
            cout << n[i].year << " "
                 << n[i].subject << " "
                 << n[i].winner << endl;
        }
    }

    // ?? Query 2: Chemistry winners (1965–1975)
    cout << "\n--- Chemistry Winners (1965–1975) ---\n";
    for(int i = 0; i < size; i++) {
        if(n[i].subject == "Chemistry" && n[i].year >= 1965 && n[i].year <= 1975) {
            cout << n[i].year << " "
                 << n[i].subject << " "
                 << n[i].winner << " "
                 << n[i].country << endl;
        }
    }

    // ?? Query 3: Winner name starts with "Louis"
    cout << "\n--- Winners with First Name 'Louis' ---\n";
    for(int i = 0; i < size; i++) {
        if(n[i].winner.find("Louis") == 0) {
            cout << n[i].year << " "
                 << n[i].subject << " "
                 << n[i].winner << " "
                 << n[i].country << endl;
        }
    }

    // ?? Query 4: Subject NOT starting with 'P'
    cout << "\n--- Subjects NOT starting with 'P' ---\n";
    for(int i = 0; i < size; i++) {
        if(n[i].subject[0] != 'P') {
            cout << n[i].year << " "
                 << n[i].subject << " "
                 << n[i].winner << endl;
        }
    }

    // ?? Query 5: 1970 winners (custom order simulation)
    cout << "\n--- 1970 Winners (Custom Order) ---\n";
    
    // First print subjects except Chemistry & Economics
    for(int i = 0; i < size; i++) {
        if(n[i].year == 1970 && n[i].subject != "Chemistry" && n[i].subject != "Economics") {
            cout << n[i].year << " "
                 << n[i].subject << " "
                 << n[i].winner << " "
                 << n[i].country << " "
                 << n[i].category << endl;
        }
    }

    // Then print Chemistry & Economics
    for(int i = 0; i < size; i++) {
        if(n[i].year == 1970 && (n[i].subject == "Chemistry" || n[i].subject == "Economics")) {
            cout << n[i].year << " "
                 << n[i].subject << " "
                 << n[i].winner << " "
                 << n[i].country << " "
                 << n[i].category << endl;
        }
    }

    return 0;
}
