/* Q1. Write a C Program to Calculate Area of a rectangle:
A. using Hard coded inputs.
B. using inputes spplied by the user. */

// Answer 

#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter the The Values of A and B = \n");
    scanf("%d %d", &a, &b);
    c = a+b;
    printf("The sum of A and B is = %d\n",c);
    return 0;
} 