#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("--- C Simple Calculator ---\n");
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op); // Note the space before %c to skip any leftover newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

   
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
           
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        case '%':
           
            if ((int)num2 != 0) {
                int modResult = (int)num1 % (int)num2;
                printf("%d %% %d = %d\n", (int)num1, (int)num2, modResult);
            } else {
                printf("Error! Modulus by zero is not allowed.\n");
            }
            break;

      
        default:
            printf("Error! '%c' is not a valid operator.\n", op);
    }

  
    printf("\nPress Enter to exit...");
    fflush(stdin);
    getchar();

    return 0;
}
