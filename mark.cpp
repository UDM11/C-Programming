#include<stdio.h>
int main ()
{
	int a, b;
	printf("Your attendence persentage: ");
	scanf("%d", a);
	if(a>=80)
	{
		printf("\n You are Eligible for final Exam");
		printf("\n Your final mark");
		scanf("%d", b);
		if(b>=45)
		{
			printf("\n You pass in Exam");
		}
		else
		{
			printf("\n You fail");
		}
	}
	else
	{
		printf("\n You are Not Eligible for Exam");
	}
}