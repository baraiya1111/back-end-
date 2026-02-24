#include <stdio.h>

int main() {
  
    int numbers[5] = {10, 20, 30, 40, 50};
    
    printf("--- 1D Array Elements ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    printf("\n--------------------------\n\n");

   
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;

    printf("--- 3x3 Matrix Layout ---\n");
    
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            printf("%d\t", matrix[row][col]); 
            sum += matrix[row][col];       
        }
        printf("\n");
    }

    printf("\nThe sum of all elements in the matrix is: %d\n", sum);
    printf("\nPress Enter to exit...");
    fflush(stdin);
    getchar();

    return 0;
}
