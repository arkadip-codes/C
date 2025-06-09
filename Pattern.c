#include <stdio.h>

int main() {
    char start; // Starting character
    printf("Enter the starting character (A-Z): ");
    scanf(" %c", &start); // Space before %c to consume any newline character
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        // Print characters from (start - i) down to 'A'
        for (char ch = start - i; ch >= 'A'; ch--) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
