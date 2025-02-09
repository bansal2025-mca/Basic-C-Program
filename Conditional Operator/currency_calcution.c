#include <stdio.h>

void calculateNotes(int amount) {
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[9] = {0};

    for (int i = 0; i < 9; i++) {
        if (amount >= notes[i]) {
            count[i] = amount / notes[i];
            amount %= notes[i];
        }
    }

    printf("Currency breakdown:\n");
    for (int i = 0; i < 9; i++) {
        if (count[i] > 0) {
            printf("%d Rs. Notes: %d\n", notes[i], count[i]);
        }
    }
}

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    
    if (amount <= 0) {
        printf("Please enter a valid amount greater than 0.\n");
    } else {
        calculateNotes(amount);
    }
    
    return 0;
}