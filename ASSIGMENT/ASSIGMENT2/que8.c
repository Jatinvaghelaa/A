#include <stdio.h>

int main() {
   int num1, num2;

   printf("Enter the first number: ");
   scanf("%d", &num1);

   printf("Enter the second number: ");
   scanf("%d", &num2);

   printf("Before swapping, num1 = %d and num2 = %d\n", num1, num2);

   num1 = num1 + num2;
   num2 = num1 - num2;
   num1 = num1 - num2;

   printf("After swapping, num1 = %d and num2 = %d", num1, num2);

   return 0;
}