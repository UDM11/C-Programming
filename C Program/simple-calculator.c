#include<stdio.h>
int main()
{
	char operators;
	float num1, num2, result;
	printf("Enter the operator: ");
	scanf("%c", &operators);
	printf("Enter the first number: ");
	scanf("%f", &num1);
	printf("Enter the second number: ");
	scanf("%f", &num2);
	switch(operators)
	{
		case '+':
			result=num1+num2;
			printf("%f + %f = %.2f", num1, num2, result);
			break;
		case '-':
			result=num1-num2;
			printf("%f - %f = %.2f", num1, num2, result);
			break;
		case '*':
			result=num1*num2;
			printf("%f X %f = %.2f", num1, num2, result);
			break;
		case '/':
			if(num2==0)
			{
				printf("Divisible by 0 not allowed!");
			}
			else
			{
				result=num1/num2;
				printf("%f / %f = %.2f", num1, num2, result);
			}
			break;
		default:
			printf("Invalid operator!");
			break;
	}
	return 0;
}
