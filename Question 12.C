#include <stdio.h>

int main() {

    int n, sum = 0;

    printf("Enter the value of N: ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        sum += i * 11;

    }

    printf("The sum of the series is %d", sum);

    return 0;

}
