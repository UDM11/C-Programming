#include <stdio.h>

void callByReference(int *x) {
    *x = *x + 5;  
    printf("Inside function (Call by Reference): x = %d\n", *x);
}

int main() {
    int a = 10;
    printf("Before function call: a = %d\n", a);
    callByReference(&a);  
    printf("After function call: a = %d\n", a); 
    return 0;
}

