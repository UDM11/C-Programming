#include<stdio.h>
main()
{
	int n, sum=0, i=1;
	printf("Enter the number: ");
	scanf("%d", &n);
	if(n<1)
	{
		printf("Invalid input. Number must be greater than or equal to 1.\n");
	}
	else
	{
		while(i<=n)
		{
			sum=sum+i;
			i=i+1;
		}
		printf("The sum of %d number is: %d", n, sum);
	}
}