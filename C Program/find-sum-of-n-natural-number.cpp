#include<stdio.h>
int main()
{
	int number, sum=0, i=1;
	printf("Enter the number: ");
	scanf("%d", &number);
	if(number<1)
	{
		printf("The number must be greater than or equal to 1.");
	}
	else
	{
		while(i<=number)
		{
			sum+=i;
			i+=1;
		}
		printf("The sum of %d number is %d", number, sum);
	}
	return 0;
}
