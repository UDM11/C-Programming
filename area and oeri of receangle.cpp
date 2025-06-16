#include<stdio.h>
int main()
{
	int len, bre, area, peri;
	printf("Enther the length of rectangle: ");
	scanf("%d", &len);
	printf("Enter thr bredth of rectangle: ");
	scanf("%d", &bre);
	area=len*bre;
	peri=2*(len+bre);
	printf("\n\n");
	printf("The Length of rectangle is %d\n", len);
	printf("The bredth of receangle is %d\n", bre);
	printf("The area of receangle is %d\n", area);
	printf("The perimeter of receangle is %d\n", peri);
	return 0;
}
