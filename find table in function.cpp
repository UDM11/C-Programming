#include<stdio.h>
void Table(int n);
void Table(int n)
{
	for(int i=1; i<=10; ++i)
	{
		printf("%d X %d = %d\n", n, i, n*i);
	}
}
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d", &n);
	Table(n);
	return 0;
}
