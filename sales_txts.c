#include <stdio.h>

int main() {
    FILE *fp;
    float amount, total = 0.0;
    int choice;

    printf("1. Add a sale\n");
    printf("2. View total sales\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        fp = fopen("sales.txt", "a"); // append mode
        if (fp == NULL) {
            printf("Error opening file.\n");
            return 1;
        }

        printf("Enter sale amount: ");
        scanf("%f", &amount);
        fprintf(fp, "%.2f\n", amount);
        fclose(fp);

        printf("Sale recorded successfully!\n");
    }
    else if (choice == 2) {
        fp = fopen("sales.txt", "r");
        if (fp == NULL) {
            printf("Error opening file.\n");
            return 1;
        }

        while (fscanf(fp, "%f", &amount) == 1) {
            total += amount;
        }
        fclose(fp);

        printf("Total sales for the day: %.2f\n", total);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}