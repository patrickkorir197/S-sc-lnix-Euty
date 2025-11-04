#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char title[1000];

    // Open file in append mode (won't delete existing records)
    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    // Remove newline character from fgets (if present)
    title[strcspn(title, "\n")] = '\0';

    // Write title to file, followed by a newline
    fprintf(fp, "%s\n", title);
    fclose(fp);

    printf(" Book title successfully stored.\n");

    // Display all borrowed books
    printf("📚 List of all borrowed books:\n");
    fp = fopen("borrowed_books.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    char line[150];
    int count = 1;
    while (fgets(line, sizeof(line), fp)) {
        printf("%d. %s", count, line);
        count++;
    }
    fclose(fp);

    printf("\n");
    return 0;
}