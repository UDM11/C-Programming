#include<stdio.h>
int main()
{
    int phy,chy, math;
    int totoal;
    printf("Enter the Physics Marks: ");
    scanf("%d", &phy);
    printf("Enter the Chemistry Marks: ");
    scanf("%d", &chy);
    printf("Enter the Math Marks: ");
    scanf("%d", &math);
    totoal=phy+chy+math;
    if(totoal>=40 && phy>=33 && chy>=33 && math>=33){
        printf("You are passed in Exam");
    }
    else{
        printf("You are Fail in Exam");
    }
    return 0;
}
