#include <stdio.h>

int main() {
    int amount;
    int tenNotes, fiveNotes, oneNotes;

    printf("Enter the amount to be withdrawn: ");
    scanf("%d", &amount);

    // Calculate notes required
    tenNotes = amount / 10;
    amount %= 10;

    fiveNotes = amount / 5;
    amount %= 5;

    oneNotes = amount;

    printf("\nCurrency notes given:\n");
    printf("10 rupee notes: %d\n", tenNotes);
    printf("5 rupee notes: %d\n", fiveNotes);
    printf("1 rupee notes: %d\n", oneNotes);

    return 0;
}
