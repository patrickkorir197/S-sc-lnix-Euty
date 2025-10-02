/*
Name: Patrick Kipkemoi Korir 
Registration no: CT101/G/25878/25
Description: Data program bundles 
*/

#include<stdio.h>

int main() {
        
        int choice;        
        
        printf("1. 100MB    @50KES\n");
        printf("2. 500MB    @200KE\n");
        printf("3. 1GB      @350\n");
        printf("4. 2GB      @600\n");
        
        printf("Enter your choice(1-4)\t");
        scanf("%d",&choice);
       printf("You selected 100MB. cost=50KES");
        printf("You selected 500MB. cost=200KES");
        printf("You selected 1GB. cost=350KES");
        printf("You selected 2GB. cost=600KES");
        printf("Invalid choice!");
    return 0;
}