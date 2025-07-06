#include<stdio.h>
main()
{
	int mark,category;
	printf("Enter the marks: ");
	scanf("%d", &mark);
	if (mark < 0 || mark > 100) {
    	printf("Invalid marks! Please enter a value between 0 and 100.");
    	return 1;
    }
	category=mark/10;
	switch(category)
	{
		case 10:
		case 9:
			printf("You grade is A.");
			break;
		case 8:
			printf("Your gade is B.");
			break;
		case 7:
			printf("Your grade is C.");
			break;
		case 6:
			printf("Your gade is D.");
			break;
		default:
			printf("You Fail");
			break;
	}
} 