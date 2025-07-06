#include<stdio.h>
int main ()
{
	int a, rem;
	printf("Value of a is: ");
	scanf("%d", &a);
	rem =a%2;
	if(rem==0)
	{
		printf("%d is even number",a);
	} else {
		printf("%d is odd number",a);
	}
}