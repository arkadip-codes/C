#include<stdio.h>
int main(){
    int p, r, t;
    float si, ci, total, temp = 1.0;
    printf("Enter the value of p: ");
    scanf("%d", &p);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    printf("Enter the value of t: ");
    scanf("%d", &t);
    si = (p*r*t)/100;
    for(int i=1; i<=t; i++){
        temp = temp*(1+(r/100.0)); // 100.0 is used to convert r to float
    }
    ci = p*temp - p;
    printf("Simple Interest: %.2f\nCompound Interest: %.2f\n", si, ci);
    return 0;
}