#include<stdio.h>
int fact(int);
int nCr(int n, int r);
int main(){
    int i, n, r, m, s, p, sum = 0;
    printf("Enter the value of n, r, m, s, p: ");
    scanf("%d %d %d %d %d", &n, &r, &m, &s, &p);
    if(r+p>n || s-p<0){
        printf("Invalid input\n");
        return 0;
    }
    for(i=1; i<=p; i++){
        sum = sum + nCr(n, r+i)*nCr(m, s-i);
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
int nCr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}