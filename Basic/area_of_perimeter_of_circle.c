#include <stdio.h>
#define PI 3.14159

int main() {
    float r, area, perimeter;
    printf("Enter radius of the circle: ");
    scanf("%f", &r);
    area = PI * r * r;
    perimeter = 2 * PI * r;
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    return 0;
}
