#include <stdio.h>

int main() {
    float marks;

    printf("--- Student Grade Portal ---\n");
    printf("Enter the student's marks: ");
    scanf("%f", &marks);

   
    if (marks > 90) {
        printf("Result: Grade A\n");
    } 
    else if (marks > 75 && marks <= 90) {
        printf("Result: Grade B\n");
    } 
    else if (marks > 50 && marks <= 75) {
        printf("Result: Grade C\n");
    } 
    else {
       
        printf("Result: Grade D\n");
    }

   
    printf("\nPress Enter to exit...");
    fflush(stdin);
    getchar();

    return 0;
}
