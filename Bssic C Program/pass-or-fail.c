#include<stdio.h>
int main()
{
    int phy,chy, math;
    printf("Enter the Physics Marks: ");
    scanf("%d", &phy);
    printf("Enter the Chemistry Marks: ");
    scanf("%d", &chy);
    printf("Enter the Math Marks: ");
    scanf("%d", &math);

    if(phy<33 || chy<33 || math<33){
        printf("You are Fail in Exam");
    }
    else if ((phy+chy+math)/3<=40){
        printf("You are Fail in Exam due to less percentage.");
    }
    else
    {
        printf("You are Pass in Exam");
    }
    return 0;
}