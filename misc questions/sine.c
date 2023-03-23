#include <stdio.h>

#define PI 3.14159265358979323846

double degrees_to_radians(double degrees) {
    return degrees * PI / 180.0;
}

double power(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double sin_degrees(double degrees) {
    double x = degrees_to_radians(degrees);
    double sin_x = 0.0;
    double term = x;
    int n = 1;
    while (term > 0.00001 || term < -0.00001) {
        sin_x += term;
        term = -term * x * x / ((2*n)*(2*n+1));
        n++;
    }
    return sin_x;
}

int main() {
    for (int degrees = 0; degrees <= 180; degrees += 15) {
        double sin_x = sin_degrees(degrees);
        printf("sin(%d) = %.6f\n", degrees, sin_x);
    }
    return 0;
}
 