#include<stdio.h>
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n+sum(n-1);
	}
}
int main()
{
	int number, result;
	printf("Enter the number: ");
	scanf("%d", &number);
	result=sum(number);
	printf("The sum of first %d natural number is %d", number, result);
	return 0;
} 
