#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a, *b, x=5, y=10;
    a = &x;
    b = &y;
    printf("%d %d\n", a, b);
    printf("size of a: %d\n", sizeof(a));
    printf("size of b: %d\n", sizeof(b));
    return 0;
}