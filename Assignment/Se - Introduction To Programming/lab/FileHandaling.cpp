#include <stdio.h>
#include <stdlib.h> // Required for exit()

int main() {
    FILE *fptr;
    char text[100];

   
    fptr = fopen("example.txt", "w");

    if (fptr == NULL) {
        printf("Error: Could not create file!\n");
        exit(1);
    }

    printf("Enter a string to save to the file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fptr, "%s", text); 
    fclose(fptr);            
    printf("Data saved successfully.\n\n");

    
    fptr = fopen("example.txt", "r");

    if (fptr == NULL) {
        printf("Error: Could not open file for reading!\n");
        exit(1);
    }

    printf("Reading from 'example.txt':\n");
 
    while (fgets(text, sizeof(text), fptr) != NULL) {
        printf("%s", text);
    }

    fclose(fptr);

    // For Dev-C++
    printf("\nPress Enter to exit...");
    getchar();

    return 0;
}
