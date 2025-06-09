#include<stdio.h>
int main() {
    int n, i, j, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (i = 2; i <= n; i++) 
    {
        int is_prime = 1; // Assume i is prime
        for (j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                is_prime = 0; // Not prime
                break;
            }
        }
        if (is_prime == 1) 
        {
            printf("%d ", i); // Print prime number
            sum += i; // Add prime number to sum
        }
    }
    
    printf("Sum of all prime numbers up to %d is: %d\n", n, sum);
    return 0;
}