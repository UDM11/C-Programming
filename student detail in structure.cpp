#include<stdio.h>
struct student
{
	char name[20];
	int roll;
	float marks;
};
int main()
{
	struct student s;
	struct student *ptr = &s;
	printf("Enter name: ");
	scanf("%s", ptr->name);
	printf("Enter roll number: ");
	scanf("%d", &ptr->roll);
	printf("Enter marks: ");
	scanf("%f", &ptr->marks);
	printf("Student Detail:-\n");
	printf("Name: %s\n", ptr->name);
	printf("Roll No: %d\n", ptr->roll);
	printf("Marks: %.2f\n", ptr->marks);
	return 0;
}
