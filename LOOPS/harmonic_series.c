#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    // Input the range
    printf("Enter the range: ");
    scanf("%d", &n);

    // Display harmonic sequence
    printf("Harmonic Sequence is: ");
    for (i = 1; i <= n; i++) {
        printf("1/%d", i);
        if (i < n) {
            printf(" + ");
        }
        sum += 1.0 / i; // Calculate sum
    }

    // Display sum
    printf("\nSum of harmonic series: %.6lf\n", sum);

    return 0;
}
