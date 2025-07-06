#include <stdio.h>
void checkEvenOdd(int n) {
    if (n % 2 == 0) {
        printf("%d is Even.\n", n);
    } else {
        printf("%d is Odd.\n", n);
    }
}

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);
    checkEvenOdd(n);
    return 0;
}