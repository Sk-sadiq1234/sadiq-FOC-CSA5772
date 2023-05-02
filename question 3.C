#include <stdio.h>

int main() {

   int n, i;

   printf("Enter the limit (n): ");

   scanf("%d", &n);

   printf("Odd number series from 1 to %d:\n", n);

   for (i = 1; i <= n; i++) {

      if (i % 2 != 0) {

         printf("%d ", i);

      }

   }

   return 0;

}
