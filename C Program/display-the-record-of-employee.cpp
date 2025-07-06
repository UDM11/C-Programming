#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    char address[100];
    float salary;
};
int main() {
    FILE *file;
    struct Employee employees[5];
    int i, found = 0;
    char searchName[] = "Rohit";  
    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Error opening file! Make sure 'employee.dat' exists.\n");
        return 1;
    }
    fread(employees, sizeof(struct Employee), 5, file);
    fclose(file);
    printf("\nSearching for employee named '%s':\n", searchName);
    for (i = 0; i < 5; i++) {
        if (strcmp(employees[i].name, searchName) == 0) {
            printf("\nEmployee Found!\n");
            printf("Name: %s\n", employees[i].name);
            printf("Address: %s\n", employees[i].address);
            printf("Salary: %.2f\n", employees[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nEmployee named '%s' not found in the records.\n", searchName);
    }
    return 0;
}

