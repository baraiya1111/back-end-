#include <stdio.h>
#include <string.h>

int main() {
    
    char firstName[50];
    char lastName[50];
    char fullName[100];

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

   
    strcpy(fullName, firstName);
    
   
    strcat(fullName, " ");
    strcat(fullName, lastName);
    int length = strlen(fullName);
    printf("\n--- Results ---\n");
    printf("Full Name: %s\n", fullName);
    printf("Total Length: %d characters\n", length);
    printf("\nPress Enter to exit...");
    fflush(stdin);
    getchar();

    return 0;
}
