#include<stdio.h>
main()
{
	int i, n, fact=1;
	printf("Enter the number: ");
	scanf("%d", &n);
	if(n<0)
	{
		printf("Invalid input. Factroial of a negative number doesn't exists.");
	}
	else
	{
		for(i=1;i<=n;++i)
		{
			fact *= i;
		}
		printf("The factroal of %d is %d",n,fact);
	}
}