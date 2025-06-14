#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d", &n);
    if(n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1; // Exit if the input is invalid
    } else {
        for (int i = 1; i <= n; i++) {
            // Loop for leading spaces
            // Number of spaces: height - i
            for (int j = 1; j <= n-i; j++) {
                printf(" ");
            }

            // Loop for stars
            // Number of numbers:
            for (int k = 1; k <= i; k++) 
            {
                printf("%d ", i);
            }
            printf("\n"); // Move to the next line
        }
    }
}