#include <stdio.h>

int main() {
    int num;

    printf("--- Number Analysis Tool ---\n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\nAnalysis for number: %d\n", num);
    printf("--------------------------\n");

   
    if (num % 2 == 0) {
        printf("-> Parity: EVEN\n");
    } else {
        printf("-> Parity: ODD\n");
    }

    
    if (num > 0) {
        printf("-> Sign:   POSITIVE\n");
    } else if (num < 0) {
        printf("-> Sign:   NEGATIVE\n");
    } else {
        printf("-> Sign:   ZERO\n");
    }

  
    if (num % 3 == 0 && num % 5 == 0) {
        printf("-> Rules:  The number IS a multiple of both 3 and 5.\n");
    } else {
        printf("-> Rules:  The number IS NOT a multiple of both 3 and 5.\n");
    }

    printf("\nPress Enter to exit...");
    fflush(stdin);
    getchar();

    return 0;
}
