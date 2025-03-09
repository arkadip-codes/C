#include<stdio.h>
int main(){
    int a, b, c, i;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    c = 1;
    for(i = 1; i <= b; i++){
        c = c * a;
    }
    printf("Result: %d\n", c);
    return 0;
}