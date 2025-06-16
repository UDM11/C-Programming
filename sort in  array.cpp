#include<stdio.h>
int sort(int a[],int n);
main()
{
int i, n, x[50];
printf("how many number u want to enter");
scanf("%d",&n);
for(i=0;i<n;++i){
scanf("%d",&x[i]);
}
sort(x,n);
for(i=0;i<n;++i){
printf("x[%d]:%d\t\t",i,x[i]);
}
}
int sort(int a[],int n)
{
int i,item,temp;
for(item=0;item<n-1;++item){
for(i=item+1;i<n;++i){
if(a[i]<a[item]){
temp=a[item];
a[item]=a[i];
a[i]=temp;
}
}
}
return 0;
}
