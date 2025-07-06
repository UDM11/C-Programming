#include<stdio.h>
int main()
{
	int num, fact=1;
	printf("Enter the number: ");
	scanf("%d", &num);
	if(num<0)
	{
		printf("Invalid input. Factorial of a negative number doesnt exist!");
	}
	else
	{
		for(int i=1; i<=num; ++i)
		{
			fact*=i;
		}
		printf("The factorial of %d is %d", num, fact);
	}
	return 0;
}

