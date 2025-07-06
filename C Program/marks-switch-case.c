#include<stdio.h>
int main()
{
	int marks, result;
	printf("Enter your marks: ");
	scanf("%d", &marks);
	if(marks<0 || marks>100)
	{
		printf("Invalid marks! Enter marks between 1 to 100.");
		return 1;
	}
	else
	{
		result=marks/10;
		switch(result)
		{
			case 10:
			case 9:
				printf("Your grade is A.");
				break;
			case 8:
				printf("Your grade is B.");
				break;
			case 7:
				printf("Your grade is C.");
				break;
			case 6:
				printf("Your grade is D.");
				break;
			case 5:
				printf("Your grade is E.");
				break;
			default:
				printf("You Fail.");
				break;
		}
	}
	return 0;
}
