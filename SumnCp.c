#include<stdio.h>
int fact(int);
int main(){
    int i, n, r, p, res, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    printf("Enter the value of p: ");
    scanf("%d", &p);
    if(r < 0 || r > p || p > n){
        printf("Invalid input\n");
        return 0;
    }
    for(i=r; i<=p; i++){
        res = fact(n)/(fact(i)*fact(n-i));
        sum = sum + res;
    }
    printf("Result:%d\n", sum);
    return 0;
}
int fact(int x){
    int i, res = 1;
    for(i=2; i<=x; i++){
        res = res*i;
    }
    return res;
}