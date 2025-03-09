#include<stdio.h>
int main(){
    int n, i, rev = 0;
    printf("Number is: ");
    scanf("%d", &n);
    while(n!=0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    printf("Reverse of the number is %d\n", rev);
    return 0;
}