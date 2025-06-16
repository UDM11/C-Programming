#include<stdio.h>
int main()
{
    int i=1, n;
    int sum =0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while(i<=n)
    {
        sum += i;
        ++i;
    }
    printf("sum of %d natural number is %d", n, sum);
    return 0;
}