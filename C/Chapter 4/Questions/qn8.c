#include<stdio.h>
int main()
{
    int n, i, product=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial of %d number is %d", n, product);
    return 0;
}