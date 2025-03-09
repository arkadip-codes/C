#include <stdio.h>
int length_square(int);
int main() {
    int x, y, z, result;
    printf("Enter three numbers (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);
    result = length_square(x) + length_square(y) + length_square(z);
    printf("Result (x^2+y^2+z^2) = %d\n", result);
    return 0;
}
int length_square(int num) {
    return num * num;
}