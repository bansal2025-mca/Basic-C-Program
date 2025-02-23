// #include <stdio.h>

// void sol(int n) {
//     int a = 0, b = 1, c, i;
//     int sum = 0;
//     printf("%d %d ", a, b);
//     for (i = 2; i <= n; i++) {
//         c = a + b;
//         sum += c;
//         a = b;
//         b = c;
//         // print each step
//         printf("%d ", c);
//     }
//     printf("\nsum: %d\n", sum);
// }
// int main() {
//     sol(20);
//     return 0;
// }
#include <stdio.h>
int fibonacci_sum(int n) {
    int a = 0, b = 1, c, sum = 0;
    
    for (int i = 1; i <= n; i++) {
        sum += a;  
        c = a + b;  
        a = b;
        b = c;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    printf("Sum of Fibonacci series  terms: %d\n", n, fibonacci_sum(n));
    return 0;
}
