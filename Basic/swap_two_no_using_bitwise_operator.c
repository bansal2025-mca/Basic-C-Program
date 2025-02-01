#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first no (a) : ");
    scanf("%d", &a);
    printf("Enter Second no (b) : ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
