#include <stdio.h>

int main() {
    int A[3][3], B[3][3], Mult[3][3];
    int i, j, k;

    // (Input code for 3x3 matrices A and B would go here, similar to the 2x2 example)

    // Multiplication Logic
    for(i = 0; i < 3; i++) {         // Row of Matrix A
        for(j = 0; j < 3; j++) {     // Column of Matrix B
            Mult[i][j] = 0;          // Initialize element to zero
            for(k = 0; k < 3; k++) { // The "dot product" loop
                Mult[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Matrix (Multiplication):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", Mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
