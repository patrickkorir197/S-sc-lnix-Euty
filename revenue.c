#include <stdio.h>

int main() {
    int revenue[7];       // Array to store daily revenue
    int i, total = 0;
    float average;

    printf("=== 1D ARRAY: Weekly Revenue Tracker ===\n");

    // Input revenue for each day
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%d", &revenue[i]);
        total += revenue[i];
    }

    // Calculate average
    average = total / 7.0;

    // Display results
    printf("\nTotal weekly revenue = %d\n", total);
    printf("Average daily revenue = %.2f\n", average);

    return 0;
}