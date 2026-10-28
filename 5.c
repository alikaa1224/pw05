#include <stdio.h>

double calc(double a, double b) {
    return (a - b) / (a * b);
}
int main(void) {
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2) {
        double result = calc(a, b);
        printf("%.4f\n", result);
    }
    return 0;
}
