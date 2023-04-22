#include <stdio.h>

int main() {
   int num, i, even_sum = 0;

   for(i = 1; i <= 10; i++) {
      printf("Enter number %d: ", i);
      scanf("%d", &num);

      if(num % 2 == 0) {
         even_sum += num;
      }
   }

   printf("Sum of even numbers: %d\n", even_sum);

   return 0;
}
