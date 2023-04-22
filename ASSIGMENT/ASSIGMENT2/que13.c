#include <stdio.h>

int main() {
   int num, i, prev = 0, curr = 1, next;

   printf("Enter a number: ");
   scanf("%d", &num);

   printf("Fibonacci series up to %d: %d, %d", num, prev, curr);

   for(i = 3; i <= num; i++) {
      next = prev + curr;
      printf(", %d", next);
      prev = curr;
      curr = next;
   }

   printf("\n");

   return 0;
}
