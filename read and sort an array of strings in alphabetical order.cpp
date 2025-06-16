#include <stdio.h>
#include <string.h>

#define MAX 100
#define LEN 100

void sortStrings(char arr[][LEN], int n) {
    char temp[LEN];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    int n;
    char arr[MAX][LEN];

    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character after scanf

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(arr[i], LEN, stdin);
        arr[i][strcspn(arr[i], "\n")] = 0; // Remove newline character
    }

    sortStrings(arr, n);

    printf("\nSorted strings in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
    
    return 0;
}

