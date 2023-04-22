#include <stdio.h>

int main() {
   int num, i, even_count = 0;

   for(i = 1; i <= 10; i++) {
      printf("Enter number %d: ", i);
      scanf("%d", &num);

      if(num % 2 == 0) {
         even_count++;
      }
   }

   printf("Number of even numbers: %d\n", even_count);

   return 0;
}
