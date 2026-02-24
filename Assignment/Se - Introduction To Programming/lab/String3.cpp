#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200], longest[50];
    int i = 0, j = 0, maxLen = 0, currLen = 0;
    int start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);

    for (i = 0; i <= n; i++) {
       
        if (!isspace(str[i]) && str[i] != '\0') {
            currLen++;
        } else {
           
            if (currLen > maxLen) {
                maxLen = currLen;
               
                strncpy(longest, &str[i - currLen], currLen);
                longest[currLen] = '\0'; 
            }
            currLen = 0; 
        }
    }

    printf("The longest word is: %s\n", longest);
    printf("Length: %d characters\n", maxLen);

    return 0;
}
