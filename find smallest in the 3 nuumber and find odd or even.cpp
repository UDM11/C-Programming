#include<stdio.h>
int main()
{
	int num1, num2, num3, smallest;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	printf("Enter the third number: ");
	scanf("%d", &num3);
	if(num1<num2)
	{
		if(num1<num3)
		{
			smallest=num1;
		}
		else
		{
			smallest=num3;
		}
	}
	else
	{
		if(num2<num3)
		{
			smallest=num2;
		}
		else
		{
			smallest=num3;
		}
	}
	printf("The smallest of %d %d and %d is %d\n", num1, num2, num3, smallest);
	if(smallest%2==0)
	{
		printf("The number is Even.\n");
	}
	else
	{
		printf("The number is Odd.\n");
	}
}
