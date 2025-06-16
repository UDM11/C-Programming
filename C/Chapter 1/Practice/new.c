#include <stdio.h>
int main() {
    int n, sum = 0, i = 1; 
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Invalid! Input number must be greater than 0.\n");
    } else {
        while (i <= n) {
            sum += i;
            i++;
        }
        printf("The sum of %d numbers is: %d\n", n, sum);
    }
    return 0;
}