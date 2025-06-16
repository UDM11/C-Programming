#include<stdio.h>
main()
{
char name[20];
int a;
float b;
printf("Give your Name, roll number,Your internal mark in computer science ");
scanf("%s%d%f",name,&a,&b);
printf("\n");
printf("***********************************************************\n");
printf("Your name:%s\n",name);
printf("Your roll:%d\n",a);
printf("Mark in CS:%f\n",b);
}