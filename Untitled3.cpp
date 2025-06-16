#include <stdio.h>

// Function to calculate simple interest
float calculate_simple_interest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time, simple_interest;

    // Input from the user
    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (R): ");
    scanf("%f", &rate);

    printf("Enter the time in years (T): ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = calculate_simple_interest(principal, rate, time);

    // Output the result
    printf("The Simple Interest is: %.2f\n", simple_interest);

    return 0;
}
