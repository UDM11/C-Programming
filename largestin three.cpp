#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the third number: ");
	scanf("%d", &c);
	if(a>b)
	{
		if(a>c)
		{
			printf("The largest number is %d",a);
		}
		else
		{
			printf("The largest number is %d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("The largest number is %d",b);
		}
		else
		{
			printf("The largest number is %d",c);
		}
	}
}