/*
Name: PATRICK KIPKEMOI KORIR 
Registration no: CT101/G/25878/25
Description: Program exam eligibility  
Description:exam eligibility 
*/

#include<stdio.h>
int main()
{
float attendance;
float average_marks;

printf("Enter your attendance");
scanf("%d", &attendance);

printf("average_marks");
scanf("%f", &average_marks);
if(attendance<=75 &&average_marks>=40)
{printf("you are eligible for exam.\n");} else
{printf("you are not eligible for exam.\n");}
return 0;
}
