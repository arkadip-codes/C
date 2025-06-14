#include<stdio.h>
int main() {
    int num1, num2, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculate GCD using the Euclidean algorithm
    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    // GCD is now in 'a'
    int gcd = a;
    
    // Calculate LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    lcm = (num1 * num2) / gcd;
    
    printf("LCM is: %d\n", lcm);
    return 0;
}