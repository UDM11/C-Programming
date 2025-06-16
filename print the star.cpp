#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = rows; i >= 1; i--) {
        // Loop to print '*' in each row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

