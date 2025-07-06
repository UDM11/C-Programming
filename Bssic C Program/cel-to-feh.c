#include <stdio.h>
int main() {
    float cel, forn;
    printf("Enter the Celsius: ");
    scanf("%f", &cel);
    forn = ((9.0 / 5.0) * cel) + 32;
    printf("Fahrenheit: %.2f\n", forn);
    return 0;
}