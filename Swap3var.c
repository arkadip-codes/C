#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a,b: ");
    scanf("%d %d",&a,&b);
    printf("Before Swapping:\n a=%d b=%d",a,b);
    c=b;
    b=a;
    a=c;
    printf("\nAfter Swapping:\n a=%d b=%d",a,b);
    return 0;
}