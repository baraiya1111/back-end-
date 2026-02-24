#include <stdio.h>

int main() {
    int score = 100;    
    int *ptr;          

  
    ptr = &score;

    printf("--- Before Modification ---\n");
    printf("Value of score: %d\n", score);
    printf("Address of score (&score): %p\n", (void*)&score);
    printf("Pointer ptr stores address: %p\n", (void*)ptr);
    *ptr = 150; 

    printf("\n--- After Modification via Pointer ---\n");
    printf("New value of score: %d\n", score);
    printf("Value at *ptr: %d\n", *ptr);

   
    printf("\nPress Enter to exit...");
    fflush(stdin);
    getchar();

    return 0;
}
