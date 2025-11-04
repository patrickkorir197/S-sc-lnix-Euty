#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[250];
    int regNo;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int choice;

    printf("1. Add student records\t");
    printf("2. View student records\t");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar(); // consume newline after scanf

    if (choice == 1) {
        fp = fopen("results.dat", "ab"); // append in binary mode
        if (fp == NULL) {
            printf("Error opening file.\t");
            return 1;
        }

        printf("Enter student name: ");
        fgets(s.name, sizeof(s.name), stdin);
        s.name[strcspn(s.name, "\t")] = 0; // remove newline

        printf("Enter registration number: ");
        scanf("%d", &s.regNo);

        printf("Enter total marks: ");
        scanf("%f", &s.marks);

        fwrite(&s, sizeof(struct Student), 1, fp);
        fclose(fp);

        printf("Student record successfully added.\t");
    }
    else if (choice == 2) {
        fp = fopen("results.dat", "rb");
        if (fp == NULL) {
            printf("Error opening file.\t");
            return 1;
        }

        printf("\n%-30s %-25s %-15s\t", "Name", "RegNo", "Marks");
        printf("-----------------------------------------\n");

        while (fread(&s, sizeof(struct Student), 1, fp)) {
            printf("%-30s %-20d %-10.2f\n", s.name, s.regNo, s.marks);
        }

        fclose(fp);
    }
    else {
        printf("Invalid choice.\t");
    }

    return 0;
}