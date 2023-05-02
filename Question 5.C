#include <stdio.h>

int main() {

   int n, sum = 0, i;

   printf("Enter the limit (n): ");

   scanf("%d", &n);

   for (i = 1; i <= n; i++) {

      sum += i;

   }

   printf("The sum of the series 1 + 2 + 3 + ... + %d is %d\n", n, sum);

   return 0;

}
