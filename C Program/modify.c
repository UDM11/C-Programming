#include<stdio.h>
int modify(int a[],int n);
main()
{
int i, n, x[50];
printf("how many number u want to enter");
scanf("%d",&n);
for(i=0;i<n;++i){
scanf("%d",&x[i]);
}
printf("\n");
modify(x,n);
for(i=0;i<n;++i){
printf("x[%d]:%d\t",i,x[i]);
}
}
int modify(int a[],int n)
{
int j;
for(j=0;j<n;++j){
a[j]=a[j]*j;
}
return 0;
}
