#include <stdio.h>

int main() {
    int i; 

    
    printf("--- For Loop ---\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    
    printf("--- While Loop ---\n");
    i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++; 
    }
    printf("\n\n");

  
    printf("--- Do-While Loop ---\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n");

  
    printf("\nPress Enter to exit...");
    fflush(stdin);
    getchar();

    return 0;
}
