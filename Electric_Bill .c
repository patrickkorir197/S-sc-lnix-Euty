#include <stdio.h>

// Function to calculate electric bill
float calculateElectricBill(int units) {
    float bill;

    if (units <= 100)
        bill = units * 10;
    else if (units <= 200)
        bill = (100 * 10) + (units - 100) * 15;
    else
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;

    return bill;
}

int main() {
    int units;
    float totalBill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    totalBill = calculateElectricBill(units);

    printf("Total Bill = Ksh. %.2f\n", totalBill);

    return 0;
}