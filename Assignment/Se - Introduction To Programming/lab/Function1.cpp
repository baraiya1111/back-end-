#include <stdio.h>

// Recursive function to find the Fibonacci number at position 'n'
int fibonacciRecursive(int n) {
    if (n <= 1)
        return n; // Base cases: fib(0)=0, fib(1)=1
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence (Recursive): ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacciRecursive(i));
    }
    printf("\n");

    return 0;
}
