#include <stdio.h>
int main() {
    int N, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &N);
    int arr[N];
    int *ptr = arr; 
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < N; i++) {
        sum += *(ptr + i); 
    }
    printf("Sum of elements: %d\n", sum);
    return 0;
}
