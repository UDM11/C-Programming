#include<stdio.h>
main()
{
int day;
printf("Value for day:");
scanf("%d",&day);
if(day==1)
{
printf("\n Its Sunday");
}
else if(day==2)
{
printf("\n Its Monday");
}
else if(day==3)
{
printf("\n Its Tuesday");
}
else if(day==4)
{
printf("\n Its Wednesday ");
}
else if(day==5)
{
printf("\n Its Thursday");
}
else if(day==6)
{
printf("\n Its Friday");
}
else
{
printf("\n Its Saturday, enjoy your holiday");
}
}