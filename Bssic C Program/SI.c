#include<stdio.h>
int main()
{
    int p, t, r;
    float si;
    printf("Enter the principle: ");
    scanf("%d", &p);
    printf("Enter the Time: ");
    scanf("%d", &t);
    printf("Enter the Rate: ");
    scanf("%d", &r);
    si=(p*t*r)/100;
    printf("The Simple interest is %.2f", si);
    return 0;
}