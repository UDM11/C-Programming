#include<stdio.h>
void checkEvenOdd(int n);
void checkEvenOdd(int n)
{
	if(n%2==0)
	{
		printf("The number is Even.");
	}
	else
	{
		printf("The number is Odd.");
	}
}
int main()
{
	int number;
	printf("Enter the number: ");
	scanf("%d", &number);
	checkEvenOdd(number);
	return 0;
}
