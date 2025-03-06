#include<stdio.h>
int main(){
    int radius;
    float pi = 3.14, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("The area of the circle is %.2f and the circumference of the circle is %.2f.\n", area, circumference);
    return 0;
}
