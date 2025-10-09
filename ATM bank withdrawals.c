#include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;

        if (balance > 0)
            printf("Remaining balance: %.2f\n", balance);
        else
            printf("Balance is zero or negative: %.2f\n", balance);
    }

    printf("Transaction complete.\n");
    return 0;
}