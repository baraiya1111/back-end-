#include <stdio.h>

int main() {
    int n, i;
    float arr[100];
    float sum = 0.0, average;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

   
    if (n > 100 || n <= 0) {
        printf("Please enter a number between 1 and 100.\n");
        return 1; 
    }

    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    average = sum / n;
    printf("\n--- Results ---\n");
    printf("Total Sum: %.2f\n", sum);
    printf("Average:   %.2f\n", average);
    printf("\nPress Enter to exit...");
    fflush(stdin);
    getchar();

    return 0;
}
1
