#include <stdio.h>
main() 
{
    int i, j, k, n=5;
    for (i = 1; i <= n; i++) 
	{
        for (j = 1; j < i; j++) 
		{
            printf(" ");
        }
        for (k = 1; k <= 2 * (n - i) + 1; k++) 
		{
            printf("*");
        }
        printf("\n");
    }
}
