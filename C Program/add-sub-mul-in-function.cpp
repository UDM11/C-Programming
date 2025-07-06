#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int main() {
    int choice, num1, num2, result;
    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    printf("Enter first numbers: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (choice == 1) {
        result = add(num1, num2);
        printf("Result: %d + %d = %d\n", num1, num2, result);
    } else if (choice == 2) {
        result = subtract(num1, num2);
        printf("Result: %d - %d = %d\n", num1, num2, result);
    } else if (choice == 3) {
        result = multiply(num1, num2);
        printf("Result: %d * %d = %d\n", num1, num2, result);
    } else {
        printf("Invalid choice! Please enter 1, 2, or 3.\n");
    }
    return 0;
}
