#include <stdio.h>

int main() {
    int n, num1, num2, result;

    printf("Enter your choice of operation:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf(" %d", &n);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (n) {
        case 1: result = num1 + num2; break;
        case 2: result = num1 - num2; break;
        case 3: result = num1 * num2; break;
        case 4: 
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error, Division by zero not possible.\n");
                return 1;
            }
            break;
        default: 
            printf("Invalid operator.\n");
            return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}
