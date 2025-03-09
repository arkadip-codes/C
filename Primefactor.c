#include <stdio.h>

int main() {
    int num, i;

    // Get user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);

    // Print factors of 2
    while (num % 2 == 0) {
        printf("2 ");
        num /= 2;
    }

    // Print odd prime factors
    for (i = 3; i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    printf("\n");
    return 0;
}
