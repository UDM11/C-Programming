#include <stdio.h>
void checkPrime(int num) {
    if (num <= 1) {
        printf("Neither Prime nor Composite.\n");
        return;
    }
    int isPrime = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is a Composite number.\n", num);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    checkPrime(num);
    return 0;
}

