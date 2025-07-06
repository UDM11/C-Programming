#include<stdio.h>
main()
{
int i,n,a,sum=0;
printf("How many positive numbers sum you want?");
scanf("%d",&n);
for(i=1;i<=n;++i){
printf("\n Enter positive number:");
scanf("%d",&a);
if(a<0){
break;
}
sum=sum+a;
}
printf("Sum is:%d",sum);
}
