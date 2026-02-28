#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    double sum = 0;

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / n;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
