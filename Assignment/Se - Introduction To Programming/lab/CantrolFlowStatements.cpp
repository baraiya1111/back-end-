#include <stdio.h>

int main() {
    int number, monthChoice;

    
    printf("--- Part 1: Even or Odd Check ---\n");
    printf("Enter an integer: ");
    scanf("%d", &number);

    
    if (number % 2 == 0) {
        printf("%d is an EVEN number.\n", number);
    } else {
        printf("%d is an ODD number.\n", number);
    }

    printf("\n----------------------------------\n");

   
    printf("--- Part 2: Month Finder ---\n");
    printf("Enter a month number (1-12): ");
    scanf("%d", &monthChoice);

    switch (monthChoice) {
        case 1:  printf("January\n");   break;
        case 2:  printf("February\n");  break;
        case 3:  printf("March\n");     break;
        case 4:  printf("April\n");     break;
        case 5:  printf("May\n");       break;
        case 6:  printf("June\n");      break;
        case 7:  printf("July\n");      break;
        case 8:  printf("August\n");    break;
        case 9:  printf("September\n"); break;
        case 10: printf("October\n");   break;
        case 11: printf("November\n");  break;
        case 12: printf("December\n");  break;
        default: 
            printf("Invalid input! Please enter a number between 1 and 12.\n");
    }

    printf("\nPress Enter to exit...");
    fflush(stdin);
    getchar();

    return 0;
}
