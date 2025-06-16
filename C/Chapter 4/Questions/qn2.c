#include<stdio.h>
int main()
{
    int i=10, n=10;
    while (i>=1)
    {
        printf("%d X %d = %d\n", n, i, n*i);
        --i;
    }
    return 0;
}