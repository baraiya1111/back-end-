#include <stdio.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = 0;
    char temp;

    // 1. Manually find the length (Challenge Requirement)
    while (str[length] != '\0') {
        length++;
    }

    // 2. Swap characters from both ends
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap str[start] and str[end]
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers toward the center
        start++;
        end--;
    }
}

int main() {
    char myString[100];

    printf("Enter a string: ");
    // Using fgets to allow spaces in the input
    fgets(myString, sizeof(myString), stdin);

    // Remove the newline character added by fgets if it exists
    for(int i = 0; myString[i] != '\0'; i++) {
        if(myString[i] == '\n') {
            myString[i] = '\0';
            break;
        }
    }

    reverseString(myString);

    printf("Reversed string: %s\n", myString);

    return 0;
}
