#include<stdio.h>
int main(){
    /*int n, a = 0, b = 1, c, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++){
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }*/
    int a = 1, b=1, c=0, n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    if (n >= 1) {
        printf("%d\n", a); // Print first term
    }
    if (n >= 2) {
        printf("%d\n", b); // Print second term
    }
    for (i = 3; i <= n; i++) {
        c = a + b; // Calculate next term
        printf("%d\n", c); // Print next term
        a = b; // Update a to the previous term
        b = c; // Update b to the current term
    }
    return 0;
}