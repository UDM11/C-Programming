#include<stdio.h>
main ()
{
	int a;
	printf("Your marks: ");
	scanf("%d",a);
	if(a>=90)
	{
		printf("Your grade is A");
	}
	else if (a>=75)
	{
		printf("Your grade is B");
	}
	else if(a>=50)
	{
		printf("Your grade is C");
	}
	else
	{
		printf("You Fail");
	}
}