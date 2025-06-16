#include<stdio.h>
#include<math.h>
main()
{
	int n,i,isprime=1;
	printf("Enter the number: ");
	scanf("%d", &n);
	if(n<2)
	{
		printf("Not a prime number.\n");
		return 0;
	}
	for(i=2; i<=sqrt(n); ++i)
	{
		if(n%i==0)
		{
			isprime=0;
			break;
		}
	}
	if(isprime)
	{
		printf("The number is prime.");
	}
	else
	{
		printf("Not a prime number.");
	}
}