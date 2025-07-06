#include<stdio.h>
int max(int a, int b);
int max(int a, int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main()
{
	int a, b, result;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	result=max(a, b);
	printf("The maximum number is %d", result);
	return 0;
}
