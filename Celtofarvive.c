#include<stdio.h>
int main(){
    int choice;
    float c, f;
    printf("Enter choice:\n1.Celsius to Fahrenheit\n2.Fahrenheit to Celsius\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &c);
            f = (c*9/5)+32;
            printf("Temperature in Fahrenheit: %.2f\n", f);
            break;
        case 2:
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%f", &f);
            c = (f-32)*5/9;
            printf("Temperature in Celsius: %.2f\n", c);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
