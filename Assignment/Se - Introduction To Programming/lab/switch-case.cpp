#include <stdio.h>

int main() {
    int a, b, c, max, min;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

 
    switch (a > b) {
        case 1: 
            switch (a > c) {
                case 1: max = a; break;
                case 0: max = c; break;
            }
            break;
        case 0: 
            switch (b > c) {
                case 1: max = b; break;
                case 0: max = c; break;
            }
            break;
    }

   
    switch (a < b) {
        case 1: 
            switch (a < c) {
                case 1: min = a; break;
                case 0: min = c; break;
            }
            break;
        case 0:
            switch (b < c) {
                case 1: min = b; break;
                case 0: min = c; break;
            }
            break;
    }

    printf("\n--- Result (switch-case) ---\n");
    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}
