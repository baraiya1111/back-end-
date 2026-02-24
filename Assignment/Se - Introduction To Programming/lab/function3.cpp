#include <stdio.h>
#include <string.h>


int isStringPalindrome(char str[]) {
    int low = 0;
    int high = strlen(str) - 1;

    while (high > low) {
        if (str[low] != str[high]) {
            return 0; 
        }
        low++;
        high--;
    }
    return 1;
}

int main() {
    char word[50];
    printf("Enter a word: ");
    scanf("%s", word);

    if (isStringPalindrome(word))
        printf("'%s' is a palindrome.\n", word);
    else
        printf("'%s' is not a palindrome.\n", word);

    return 0;
}
