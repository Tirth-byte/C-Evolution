/* Q3. write a program to convert celusius (Centigrade degrees temperature to fahrenhenheit). */

// Answer 

#include <stdio.h>
int main() {
    int choice;
    float celsius,fahrenheight;
    printf("Welcome !\n\n");
    printf("1. Convert celsius to fahrenheight\n");
    printf("2. Convert fahrenheight to celsius \n");
    scanf("%d",&choice);

    switch(choice) {
        case 1: 
        printf("Enter the value of celsius = \n");
        scanf("%f",&celsius);
        fahrenheight = 9.0/5.0*celsius+32;
        printf("fahrenheight = %f\n",fahrenheight);
        printf("Thank You!\n");
        break;

        case 2:
        printf("Enter the value of fahrenheight = \n");
        scanf("%f",&fahrenheight);
        celsius = (fahrenheight-32)*5.0/9.0;
        printf("celsius = %f\n", celsius);
        printf("Thank You!\n");
        break;

        default:
        printf("Invalid input");
    }
    return 0;
}