#include<stdio.h>
main()
{
int n,a,sum=0,count=1;
printf("How many number you want to enter\n");
scanf("%d",&n);
printf("\n You will be entering %d numbers",n);
while(count<=n){
printf("\n");
scanf("%d",&a);
sum=sum+a;
++count;
}
printf("\n sum of %d numbers is %d",n,sum);
}
