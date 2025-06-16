#include<stdio.h>
int main()
{
    int n, i, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for ( i = 1; i <= 10; i++)
    {
        sum += (n*i);
        printf("%d X %d = %d\n", n, i, n*i);
    }
    printf("All the %d multiplication Sum is %d",n, sum);
    return 0;
}