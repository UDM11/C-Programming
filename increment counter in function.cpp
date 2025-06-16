#include <stdio.h>
void incrementCounter() {
    static int count = 0;  
    count++;  
    printf("Counter value: %d\n", count);
}
int main() {
    for (int i = 0; i < 5; i++) {
        incrementCounter();
    }
    return 0;
}
