#include <stdio.h>

double power(int x, int y);
double factorial(int n);

int main() {
    int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    double sum = 1.0; // First term is always 1

    for (int i = 2; i <= n; i++) {
        sum += power(i, i) / factorial(i);
    }

    printf("Sum of the series: %.6lf\n", sum);
    return 0;
}

double power(int x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}