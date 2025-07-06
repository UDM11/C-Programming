#include <stdio.h>
int main()
{
    int number[10], largest;
    printf("Enter the 10 number:- \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &number[i]);
    }
    largest = number[0];
    for (int i = 1; i < 10; i++)
        if (number[i] > largest)
        {
            largest = number[i];
        }
    printf("The largest number is %d", largest);
    printf("\n");
    printf("Check odd or even\n");
    for (int i = 0; i < 10; i++)
    {
        if (number[i] % 2 == 0)
        {
            printf("%d is Even\n", number[i]);
        }
        else
        {
            printf("%d is Odd\n", number[i]);
        }
    }
    return 0;
}