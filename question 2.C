include <stdio.h>

int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);

// Loop through all even numbers from 2 to n
for (int i = 2; i <= n; i += 2) {
printf("%d ", i);
}

return 0;
}
