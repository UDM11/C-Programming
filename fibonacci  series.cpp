#include<stdio.h>
main()
{
	int n,i,next,a=0,b=1;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	if(n<=0)
	{
		printf("Invalid input. Number of terms must be greater than 0.");
		return 1;
	}
	printf("Fibonacci series: %d",a);
	if(n>1)
	{
		printf(",%d",b);
	}
	for(i=3; i<=n; ++i)
	{
		next=a+b;
		printf(",%d", next);
		a=b;
		b=next;
	}
	printf("\n"); 
} 