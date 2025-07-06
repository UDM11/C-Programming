#include<stdio.h>
int main()
{
    int radius, height;
    printf("Enter the Raadius of Circle: ");
    scanf("%d", &radius);
    printf("\nHeight of Cylinder: ");
    scanf("%d", &height);
    printf("The area of circle is %.2f", 3.14*radius*radius);
    printf("\nThe Volume of Cylinder is %.2f", 3.14*radius*radius*height);
    return 0;
}