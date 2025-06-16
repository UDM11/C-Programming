#include <stdio.h>

void callByValue(int x) {
    printf("Inside function (Call by Value): x = %d\n", x);
}

int main() {
    int a = 10;
    printf("Before function call: a = %d\n", a);
    callByValue(a);  
    printf("After function call: a = %d\n", a);  
    return 0;
}

