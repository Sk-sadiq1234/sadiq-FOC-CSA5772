#include <stdio.h>

int main() {

    int n, sum = 0;

    printf("Enter the value of N: ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {

        sum += i * i;

    }

    printf("The sum of the squares of odd numbers is %d", sum);

    return 0;

}
