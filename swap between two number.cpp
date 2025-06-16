#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	a= a+b;
	b=a-b;
	a=a-b;
	printf("After the swaping a is %d and b is %d", a,b);
	
}
