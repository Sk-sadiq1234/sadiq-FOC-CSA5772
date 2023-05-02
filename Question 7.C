#include <stdio.h>

int main() {

   int n, sum=0;

   

   printf("Enter the number of terms in the series: ");

   scanf("%d", &n);

   for (int i = 1; i <= n; i++) {

      if (i % 2 != 0) {

         sum += i;

      }

   }

   printf("The sum of odd numbers in the series is %d", sum);

   return 0;

}
