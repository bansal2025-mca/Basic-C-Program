#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num & 1) ? printf("Odd number\n") : printf("Even number\n");
    return 0;
}
