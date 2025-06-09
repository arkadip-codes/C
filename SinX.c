#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
#define ACCURACY 1e-6

// Function to convert degrees to radians
double deg2rad(double deg) {
    return deg * (PI / 180.0);
}

// Function to calculate sin(x) using Taylor series
double sin_taylor(double x) {
    double term = x; // First term x^1/1!
    double sum = x;
    int n = 1;
    while (fabs(term) >= ACCURACY) {
        term *= -x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }
    return sum;
}

int main() {
    printf("Angle (deg)\tSin(x) (Taylor)\tSin(x) (math.h)\n");
    for (int deg = 0; deg <= 360; deg += 15) {
        double rad = deg2rad(deg);
        double sin_val = sin_taylor(rad);
        double sin_lib = sin(rad);
        printf("%3d\t\t% .7f\t% .7f\n", deg, sin_val, sin_lib);
    }
    return 0;
}