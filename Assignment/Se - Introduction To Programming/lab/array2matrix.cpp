#include <stdio.h>

int main() {
    int A[2][2], B[2][2], Sum[2][2];
    int i, j;

    printf("--- Enter Elements for Matrix A (2x2) ---\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\n--- Enter Elements for Matrix B (2x2) ---\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

   
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nResultant Matrix (Sum):\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
