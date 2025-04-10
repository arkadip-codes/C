#include<stdio.h>
int power(int a, int b); // Function prototype for power function
int main(){
    int a, b, res, i;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    
    res = power(a, b); // Call the power function
    
    printf("Result: %d\n", res);
    return 0;
}

int power(int a, int b) { // Function definition for power function
    int result = 1, i=0;
    for (i = 0; i < b; i++) {
        result *= a; // Multiply result by base 'a' for 'b' times
    }
    return result; // Return the final result
}