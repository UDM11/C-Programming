#include<stdio.h>
float average(float a, float b, float c){
    return (a+b+c)/3;
}

int main()
{
    float num1, num2, num3;
    printf("Enter the first  number: ");
    scanf("%f", &num1);
    printf("enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);
    float avg = average(num1, num2, num3);
    printf("The average of theree number is %.2f", avg);
    return 0;
}