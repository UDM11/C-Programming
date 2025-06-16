#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int main()
{
	int choice, num1, num2, result;
	printf("Select operator:-\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("Enter your choice between 1 to 3:\n");
	scanf("%d", &choice);
	printf("Enter the first nummber: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	if(choice==1)
	{
		result=add(num1, num2);
		printf("The sum of two number is %d", result);
	}
	else if(choice==2)
	{
		result=sub(num1, num2);
		printf("The subtraction of two number is %d", result);
	}
	else if(choice==3)
	{
		result=mul(num1, num2);
		printf("The multlply is %d", result);
	}
	else
	{
		printf("Enter number between 1 to 3");
	}
	return 0;
}
