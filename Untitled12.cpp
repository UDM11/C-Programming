#include <stdio.h>

int main() {
    float a, b, c, d, result;

    // Input values for a, b, c, and d
    printf("Enter the values of a, b, c, and d: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    // Check if d is not zero
    if (d != 0) {
        // Calculate result
        result = (a + b) * (c / d);
        // Display result
        printf("Result = %.2f\n", result);
    } else {
        // Handle division by zero
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
