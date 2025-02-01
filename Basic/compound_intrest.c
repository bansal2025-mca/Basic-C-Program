#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, CI;
    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    CI = principal * pow((1 + rate / 100), time) - principal;
    printf("Compound Interest = %.2f\n", CI);
    return 0;
}
