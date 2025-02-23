#include <stdio.h>
int sum_of_digit(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sum_of_digit(n / 10);
}
int main() {
    int n;
    printf("Enter a 5-digit number: ");
    scanf("%d", &n);
    printf("Sum of digits of %d is: %d\n", n, sum_of_digit(n));
    return 0;
}
