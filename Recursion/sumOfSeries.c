// #include <stdio.h>
// #include <math.h>

// double sol(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     return pow(-1, n + 1) * (1.0 / n) + sol(n - 1);
// }

// int main() {
//     printf("%lf\n", sol(3));
//     return 0;
// }
#include <stdio.h>
#include<math.h>
double series_sum(int n) {
    if (n == 0){
        return 0; 
    } 
    return pow(-1, n + 1) * (1.0 / n) + series_sum(n - 1);
}
int main() {
    int n;
    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Sum of the series up to %d terms is: %.6f\n", n, series_sum(n));
    }
    return 0;
}
