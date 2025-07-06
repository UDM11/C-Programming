#include<stdio.h>
void printreverse(int n);
void printreverse(int n)
{
	if(n==0)
	{
		return;
	}
	else
	{
		printf("%d\n", n);
		printreverse(n-1);
	}
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Number reverse from %d to 1 are: \n", n);
	printreverse(n);
	return 0;
}
