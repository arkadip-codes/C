#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    float d, x1, x2;
    printf("Enter the coefficient of x^2: ");
    scanf("%d", &a);
    printf("Enter the coefficient of x: ");
    scanf("%d", &b);
    printf("Enter the constant term: ");
    scanf("%d", &c);
    printf("The quadratic equation is: %dx^2+%dx+%d=0\n", a, b, c);
    d = b*b - 4*a*c;
    if(d>0){
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("Roots are real and distinct\nRoot 1: %.2f\nRoot 2: %.2f\n", x1, x2);
    }
    else if(d==0){
        x1 = -b/(2*a);
        printf("Roots are real and equal\nRoot 1: %.2f\nRoot 2: %.2f\n", x1, x1);
    }
    else{
        printf("Roots are imaginary\n");
    }
    return 0;
}