#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    char address[100];
    float salary;
};
int main() {
    FILE *file;
    struct Employee emp;
    int i;
    char searchName[] = "rohit";
    int found = 0;
    file = fopen("employee.dat", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter details of 5 employees:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp.name);
        printf("Address: ");
        scanf(" %[^\n]", emp.address);
        printf("Salary: ");
        scanf("%f", &emp.salary);
        fwrite(&emp, sizeof(struct Employee), 1, file);
    }
    fclose(file);
    printf("\nData written to employee.dat successfully!\n\n");
    file = fopen("employee.dat", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\nAll Employee Records:\n");
    printf("--------------------------------------------------\n");
    printf("%-20s %-30s %-10s\n", "Name", "Address", "Salary");
    printf("--------------------------------------------------\n");
    while (fread(&emp, sizeof(struct Employee), 1, file) == 1) {
        printf("%-20s %-30s %-10.2f\n", emp.name, emp.address, emp.salary);
    }
    fclose(file);
    file = fopen("employee.dat", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\nSearching for employee named 'rohit':\n");
    while (fread(&emp, sizeof(struct Employee), 1, file) == 1) {
        if (strcmp(emp.name, searchName) == 0) {
            printf("\nRecord Found:\n");
            printf("Name: %s\n", emp.name);
            printf("Address: %s\n", emp.address);
            printf("Salary: %.2f\n", emp.salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nEmployee with name 'rohit' not found.\n");
    }
    fclose(file);
    return 0;
}
