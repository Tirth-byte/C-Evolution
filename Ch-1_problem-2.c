/* Q2. Calculate the Area of a circle and modify the same program to calculate the volume of a cylinder given
its radius and height. */

// Answer 

#include <stdio.h>
int main() {
    int choice;
    float Pi,r,h;
    Pi=3.14;
    printf("Welcome !\n\n");

printf("1. Area of Circle\n");
printf("2. Volume of cylinder\n");
printf("Enter your Choice = ");
scanf("%d",&choice);

switch(choice)
{
    case 1:
    printf("Enter the radius: ");
    scanf("%f",&r);
    printf("Area of circle = %f\n\n",Pi*r*r);
    break;
    
    case 2:
    printf("Enter the radius and height :");
    scanf("%f %f",&r,&h);
    printf("The Volume of cylinder is = %f",Pi*r*r*h);
    break;

    default:
    printf("Invalid input");

}
    return 0;
}