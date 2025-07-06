#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    // Swap without using a third variable
    a = a + b; // Step 1
    b = a - b; // Step 2
    a = a - b; // Step 3

    // Output the swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
