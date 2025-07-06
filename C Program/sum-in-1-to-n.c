#include <stdio.h>

int main() {
    int n, sum = 0;

    // Prompt the user to enter the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
