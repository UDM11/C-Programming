#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122)
    {
        printf("The character is lower case.");
    }
    else{
        printf("The character is upper case.");
    }
    return 0;
}