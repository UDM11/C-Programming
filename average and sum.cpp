#include<stdio.h>
main()
{
	int n,c;
	float avg, d, sum=0.0;
	float list[100];
	printf("The number you will be average: ");
	scanf("%d", &n);
	printf("\n");
	/* read the number and calculate their sum*/
	for(c=0;c<n;++c)
	{
		printf("i=%d x=",c+1);
		scanf("%f", &list[c]);
		sum = sum+list[c];
	}
	/*calculate and display the average*/
	avg = sum/n;
	printf("\nThe average us %0.2f\n",avg);
	/* Calculate and display the deviation about the average*/
	for(c=0;c<n;++c)
	{
		d=list[c]-avg;
		printf("i=%d x=%0.2f d=0.2f\n",c+1,list[c],d);
	}
}