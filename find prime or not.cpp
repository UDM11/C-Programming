#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, isprime=1;
	printf("Enter the numebr: ");
	scanf("%d", &n);
	if(n<2)
	{
		printf("The number is not prime.");
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
		printf("The number is not prime.");
	}
	return 0;
}
