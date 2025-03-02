#include<stdio.h>
int main()
{
    // Input the base and exponent  
    int a, b, result = 1, i;
    printf("Enter the base: ");
    scanf("%d", &a);    // Base
    printf("Enter the exponent: "); 
    scanf("%d", &b);    // Exponent
    // Handling edge cases 
    if (b < 0) {
        printf("Invalid input.\n");
        return 0; // Exit the program
    }
    // Loop to calculate the power
    for (i = 1; i <= b; i++) {
        result = result * a;  // Calculate the power
    }
    // Print the result
    printf("%d^%d = %d\n", a, b, result);
    return 0;
}