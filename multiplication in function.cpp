#include <stdio.h>

void printTable(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", n, i, n * i);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printTable(num);
    return 0;
}
