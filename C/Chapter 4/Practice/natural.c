#include<stdio.h>
int main()
{
    int i=1, number;
    printf("Enter the number: ");
    scanf("%d", &number);
    do
    {
        printf("%i\n", i);
        ++i;
    } while (i<=number);
    return 0;
}