// #include <stdio.h>

// int main() {
//     int i, j;
//     for (i = 1; i <= 5; i++) {  
//         for (j = 1; j <= i; j++) { 
//             printf("%d ", (i + j) % 2); 
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i <= 5; i++) {  
        for (j = 0; j <= i; j++) { 
            printf("%d ", (i + j) % 2); 
        }
        printf("\n");
    }
    return 0;
}