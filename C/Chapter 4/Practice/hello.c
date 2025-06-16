#include<stdio.h>
int main()
{
    int i=0;
    int number=100000;
    while (i<=number)
    {
        printf("%i. Happy Birthday!\n", i);
        i+=100;
    }
    return 0;
}