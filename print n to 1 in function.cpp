#include <stdio.h>
void printReverse(int n) {
    if (n == 0) {
        return;  
    }
    printf("%d ", n);  
    printReverse(n - 1);  
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Numbers from %d to 1 are: \n", n);
    printReverse(n); 
    return 0;
}
