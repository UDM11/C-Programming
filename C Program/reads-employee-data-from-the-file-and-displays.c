#include <stdio.h>
struct Employee {
    char name[50];
    char address[100];
    float salary;
};
int main() {
    FILE *file;
    struct Employee employees[5];
    int i;
    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Error opening file! Make sure 'employee.dat' exists.\n");
        return 1;
    }
    fread(employees, sizeof(struct Employee), 5, file);
    fclose(file);
    printf("\nEmployee Details:\n");
    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Address: %s\n", employees[i].address);
        printf("Salary: %.2f\n", employees[i].salary);
    }
    return 0;
}

