#include <stdio.h>
int main() {
    int num, i = 2, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (i < num) 
    {
        if (num % i == 0) 
        { 
            isPrime = 0;
            break;
        }
        i++;
    }
    if (isPrime && num > 1){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }
    return 0;
}
