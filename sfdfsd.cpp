#include<stdio.h>
main()
{
int attendance,mark;
printf("You attendance percentage ");
scanf("%d",&attendance);
if(attendance >=80)
{
printf("\n You are eligible to give final exam ");
printf("\n Your final mark");
scanf("%d",&mark);
if(mark>=40)
{
printf("\n You pass your exam");
}
else {
printf("\n You fail");
}
}
else
{
	printf("\n You are not Eligible in Exam");
}
}