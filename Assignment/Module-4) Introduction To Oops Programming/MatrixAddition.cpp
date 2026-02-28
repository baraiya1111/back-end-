#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], Sum[2][2];

    cout << "Enter elements for Matrix A (2x2):" << endl;
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> A[i][j];

    cout << "Enter elements for Matrix B (2x2):" << endl;
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            cin >> B[i][j];

    // Addition logic
    cout << "Resultant Matrix:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
