#include <stdio.h>
void armstrong(int n) {
    int sum = 0;
    int temp = n;
    while (n > 0) {
        int rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if (temp == sum) {
        printf("%d\n", temp);
    }
}

int main() {
    for (int i = 100; i <= 500; i++) {
        armstrong(i);
    }
    return 0;
}
// #include <stdio.h>
// int armstrong(int num) {
//     int original_num = num, sum = 0, digit;
//     while (num > 0) {
//         digit = num % 10; 
//         sum += digit * digit * digit; 
//         num /= 10;
//     }
//     return (sum == original_num); 
// }

// void find_armstrong_numbers(int start, int end) {
//     printf("Armstrong numbers between %d and %d are:\n", start, end);
//     for (int i = start; i <= end; i++) {
//         if (armstrong(i)) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
// }

// int main() {
//     int start = 100, end = 500;
//     find_armstrong_numbers(start, end);

//     return 0;
// }
