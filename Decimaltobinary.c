#include <stdio.h>
int main() 
{
    int n, i, j, temp = 0, rem, binary;
    // Input a decimal number
    printf("Enter the decimal number: ");
    scanf("%d", &n);

    // Handling negative input
    if (n < 0) 
    {
        printf("Invalid input\n");
        return 0;
    }
    else
    {
        // Store the binary number in reverse orde
        for(i = 0; i <= n; i++)
        {
            rem = n%2;
            temp = temp*10 + rem;
            n = n/2;
        }
        // Print the binary number in correct order
        for(j = 0; j <= temp; j++)
        {
            binary = temp%10;
            printf("%d", binary);
            temp = temp/10;
        }
    }
        return 0;
    printf("\n");
}

