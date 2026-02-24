#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
       
        for (i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;       
            }
        }
    }

    if (isPrime)
        printf("%d is a PRIME number.\n", num);
    else
        printf("%d is NOT a prime number.\n", num);

    return 0;
}
