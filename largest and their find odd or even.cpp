#include<stdio.h>
int main()
{
	int num1, num2, num3, largest;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	printf("Enter the third number: ");
	scanf("%d", &num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
			largest=num1;
		}
		else
		{
			largest=num3;
		}
	}
	else
	{
		if(num2>num3)
		{
			largest=num2;
		}
		else
		{
			largest=num3;
		}
	}
	printf("The largest of %d %d and %d is %d\n", num1, num2, num3, largest);
	if(largest%2==0)
	{
		printf("The number is Even.\n");
	}
	else
	{
		printf("The number is Odd.\n");
	}
}
