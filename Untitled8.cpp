#include <stdio.h>

int main() {
    int num1, num2;       // Variables to store the input numbers
    int sum, diff, prod;  // Variables for sum, difference, product
    float quotient;       // Variable for the quotient

    // Input the two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform calculations
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    // Check for division by zero
    if (num2 != 0) {
        quotient = (float)num1 / num2; // Cast to float for division
    } else {
        printf("Division by zero is not allowed.\n");
        return 1; // Exit with an error code
    }

    // Display results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %.2f\n", quotient);

    return 0; // End program
}
