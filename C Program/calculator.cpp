#include<stdio.h>
main()
{
	char operators;
	float num1,num2,result;
	printf("Enter the opetator: ");
	scanf("%c", &operators);
	printf("Enter the first number: ");
	scanf("%f", &num1);
	printf("Enter the second number: ");
	scanf("%f", &num2);
	switch(operators)
	{
		case '+':
			result=num1+num2;
			printf("The sum of two number is: %.2f", result);
			break;
		case '-':
			result=num1-num2;
			printf("The subtraction of two number is: %.2f", result);
			break;
		case '*':
			result=num1*num2;
			printf("The multiply of two number is: %.2f", result);
			break;
		case '/':
			if(num2==0)
			{
				printf("Error! Division by zero is not allowed.");
			}
			else
			{
				result=num1/num2;
				printf("The divide of two number is: %.2f", result);
			}
			break;
		default:
				printf("Invalid operator.");		
	} 
}