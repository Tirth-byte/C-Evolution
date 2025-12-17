/* Q4. Write a program to calculate simple interest for a set of values
representing principal, number of years and rate of interest. */

#include <stdio.h>
#include <math.h>

int main() {
    int choice, p, n;
    float r, t, si, a;

    printf("Welcome!\n\n");
    printf("1. Calculate Simple Interest\n");
    printf("2. Calculate Compound Interest\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("\nYou can calculate Simple Interest here!\n\n");
            printf("Enter the Principal Amount: ");
            scanf("%d", &p);

            printf("Enter the Annual Rate of Interest: ");
            scanf("%f", &r);

            printf("Enter the Time (in years): ");
            scanf("%f", &t);

            si = (p * r * t) / 100;
            a = p + si;

            printf("\nSimple Interest = %.2f\n", si);
            printf("Total Amount = %.2f\n", a);
            break;

        case 2:
            printf("\nYou can calculate Compound Interest here!\n\n");
            printf("Enter the Principal Amount: ");
            scanf("%d", &p);

            printf("Enter the Annual Rate of Interest: ");
            scanf("%f", &r);

            printf("Enter the Time (in years): ");
            scanf("%f", &t);

            printf("Enter number of times interest is compounded per year: ");
            scanf("%d", &n);

            a = p * pow((1 + r / (100 * n)), n * t);

            printf("\nCompound Interest = %.2f\n", a - p);
            printf("Total Amount = %.2f\n", a);
            break;

        default:
            printf("Invalid Input!");
    }

    return 0;
}
