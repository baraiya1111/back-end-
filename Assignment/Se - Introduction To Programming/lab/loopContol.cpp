#include <stdio.h>

int main() {
    int i;

    printf("Loop starting (Goal: 1 to 10)...\n");
    printf("Rules: Skip 3, Stop at 5.\n\n");

    for (i = 1; i <= 10; i++) {
       
        if (i == 3) {
            printf("(Skipping 3...)\n");
            continue; 
        }

       
        if (i == 5) {
            printf("Reached 5! Breaking the loop.\n");
            break;
        }

        printf("Number: %d\n", i);
    }

    printf("\nLoop terminated. Execution finished.\n");
    printf("Press Enter to exit...");
    fflush(stdin);
    getchar();

    return 0;
}
