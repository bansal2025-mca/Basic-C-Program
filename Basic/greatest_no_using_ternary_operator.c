#include <stdio.h>

int main() {
    int a, b, greatest;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    greatest = (a > b) ? a : b;
    printf("Greatest number is: %d\n", greatest);
    return 0;
}
