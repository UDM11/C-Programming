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
    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter details of 5 employees:\n");
    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name); 
        printf("Address: ");
        scanf(" %[^\n]", employees[i].address);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
    fwrite(employees, sizeof(struct Employee), 5, file);
    fclose(file);
    printf("\nEmployee details saved successfully in 'employee.dat'.\n");
    return 0;
}

