#include<stdio.h>
int main()
{
    int age;
    double income;

    printf("Enter your age:");
    scanf("%d", &age);

    printf("Enter your income:");
    scanf("%lf", &income);

    if(age>=21 & income>=21000)
    {
        printf("congratulations,you qualify for a loan.\n");
    }
    else
    {
        printf ("unfortunately, we are unable to offer you loan at this time.\n");
    }
    return 0;
}