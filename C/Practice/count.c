#include <stdio.h>
void createFile() {
    FILE *file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return;
    }
    fprintf(file, "Welcome to the file\n");
    fclose(file);
    printf("File created and content written successfully.\n");
}
void appendFile() {
    FILE *file = fopen("student.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "This is appended content.\n");
    fclose(file);
        file = fopen("student.txt", "r");
    char ch;
    printf("Updated file content:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}
void clearFile() {
    FILE *file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error clearing file!\n");
        return;
    }
    fprintf(file, "All previous data is cleared\n");
    fclose(file);
    printf("File cleared successfully.\n");
}
int main() {
    createFile();
    appendFile();
    clearFile();
    return 0;
}
