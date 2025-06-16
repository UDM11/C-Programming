#include<stdio.h>
main()
{
	int n, i;
	printf("Enter the number: ");
	scanf("%d", &n);
	for(i=10; i>=1; i--)
	{
		printf("%d X %d = %d\n", n, i, n*i);
	}
}
