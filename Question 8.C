#include <stdio.h>

int main() {

    int n, sum = 0, sign = 1;

    printf("Enter the value of N: ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        sum += i * sign;

        sign *= -1;

    }

    printf("The sum of the series is %d", sum);

    return 0;

}
