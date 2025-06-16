#include<stdio.h>
void swap(int *ptr1, int *ptr2);
void swap(int *ptr1, int *ptr2)
{
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
int main()
{
	int a, b;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Before swaping a=%d, and b=%d\n", a, b);
	swap(&a, &b);
	printf("After swaping a=%d, and b=%d", a, b);
	return 0;
}
