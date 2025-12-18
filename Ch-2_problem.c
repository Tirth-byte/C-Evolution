/* Q1.Write a C program to check whether a given number is divisible by 97 or not.
 */
#include <stdio.h>
int main() {
    printf("Welcome !\n");
    int num;
    printf("Enter the number you want to check for deviceble by 97 or not\n");
   scanf("%d",&num);
   if(num % 97 == 0){
    printf("%d is divisible by 97\n",num);
   }
   else{
    printf("%d is not divisible by 97\n",num);
   }
   return 0;
}
