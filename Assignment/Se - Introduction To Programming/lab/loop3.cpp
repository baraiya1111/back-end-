#include <stdio.h>

int main() {
    int num, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

   
    int temp = num;

    
    if (num < 0) num = -num;

    while (num > 0) {
        remainder = num % 10; 
        sum = sum + remainder;
        num = num / 10;       
    }

    printf("The sum of digits of %d is: %d\n", temp, sum);

    return 0;
}
