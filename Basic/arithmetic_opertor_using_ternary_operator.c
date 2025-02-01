#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf(" %c", &op);

    (op == '+') ? printf("Result: %d\n", a + b) :
    (op == '-') ? printf("Result: %d\n", a - b) :
    (op == '*') ? printf("Result: %d\n", a * b) :
    (op == '/') ? (b != 0 ? printf("Result: %.2f\n", (float)a / b) : printf("Division by zero not allowed\n")) :
    printf("Invalid operator\n");

    return 0;
}
