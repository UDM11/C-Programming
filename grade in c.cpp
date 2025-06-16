#include<stdio.h>
main()
{
	int mark;
	printf("Enter your marks (1-100): ");
	scanf("%d", &mark);
	if(mark>=90 && mark<=100)
	{
		printf("Your grade is A");
	}
	else if(mark>=80 && mark<=90)
	{
		printf("Your grade is B");
	}
	else if(mark>=70 && mark<=80)
	{
		printf("Your grade is C");
	}
	else{
		printf("You fail");
	}
}
