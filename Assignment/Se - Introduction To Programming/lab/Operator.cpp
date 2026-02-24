#include <stdio.h>

int main() {
    int a, b;

   
    printf("Enter the first integer (a): ");
    scanf("%d", &a); 
    
    printf("Enter the second integer (b): ");
    scanf("%d", &b);

    printf("\n--- Results for a = %d and b = %d ---\n", a, b);

   
    printf("\n[Arithmetic]\n");
    printf("Sum (a + b): %d\n", a + b);
    printf("Difference (a - b): %d\n", a - b);
    printf("Product (a * b): %d\n", a * b);
    
    if (b != 0) {
        printf("Division (a / b): %d\n", a / b);
        printf("Remainder (a %% b): %d\n", a % b); 
    } else {
        printf("Division: Cannot divide by zero!\n");
    }

    
    printf("\n[Relational]\n");
    printf("Is a equal to b? %d\n", a == b);
    printf("Is a greater than b? %d\n", a > b);
    printf("Is a not equal to b? %d\n", a != b);

   
    printf("\n[Logical]\n");
    printf("Are both a and b positive? %d\n", (a > 0 && b > 0));
    printf("Is at least one negative? %d\n", (a < 0 || b < 0));
    printf("Is 'a' NOT zero? %d\n", !(a == 0));

   
    printf("\nPress Enter to exit...");
    fflush(stdin); 
    getchar();
    
    return 0;
}
