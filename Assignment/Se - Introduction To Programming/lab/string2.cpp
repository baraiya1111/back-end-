#include <stdio.h>
#include <ctype.h>

int main() {
    char str[150];
    int v = 0, c = 0, d = 0, s = 0;

    printf("Enter a string for full analysis: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];

        if (isalpha(ch)) { 
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                v++;
            else
                c++;
        } 
        else if (isdigit(ch)) {
            d++;
        } 
        else if (ch != ' ' && ch != '\t') { 
            s++;
        }
    }

    printf("\n--- Character Report ---\n");
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    printf("Digits: %d\n", d);
    printf("Special Characters: %d\n", s);

    return 0;
}
