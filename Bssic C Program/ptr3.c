#include<stdio.h>
int* sum(int a, int b){
    int c = a+b;
    int* ptr =&c;
    printf("The sum is %d\n", c);
    return ptr;
}
float* average(int a, int b){
    float c = (a+b)/2.0;
    float * ptr =&c;
    printf("The average is %f\n", c);
    return ptr;
}
int main()
{
    int x, y;
    int* ptr1;
    float* ptr2;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("Enter the number: ");
    scanf("%d", &y);
    ptr1=sum(x,y);
    ptr2=average(x,y);
    printf("The address of sum is %u and of average is %u",ptr1, ptr2);
    return 0;
}