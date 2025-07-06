#include<stdio.h>
int main()
{
    int n;
    int prime=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            prime=1;
            break;
        }
        
    }
    if(prime)
    {
        printf("The number is not prime.");
    }
    else{
        printf("The number is prime.");
    }
    return 0;
}