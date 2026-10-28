//nano 5.c
#include <stdio.h>

int main(void) {
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2) {
        double result = (a - b) / (a * b);
        printf("%.4f\n", result);
    }
    return 0;
}
