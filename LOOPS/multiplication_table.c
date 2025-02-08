/*
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, i * n);
    }

    return 0;
}
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Multiplication table of %d in reverse order:\n", n);
    for (int i = 10; i >= 1; i--) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
