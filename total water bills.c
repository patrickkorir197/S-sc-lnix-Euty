/*
Name: Patrick Kipkemoi Korir 
Registration no: CT101/G/25878/25
Description:total water bill 
*/

#include<stdio.h>
int main()
{
// input water unit 
int units;
float bills;

printf("Enter the water unit consumed");
scanf("%d",&units);

// calculation of total bills
if(units<=30){bills=units*20;}else
if(units>=31 &&units<=60){bills=units*25;}else
if(units>60){bills=units*30;}

//display the total bills 
printf("total water bills:%.2fKES\n",bills);
return 0;
}