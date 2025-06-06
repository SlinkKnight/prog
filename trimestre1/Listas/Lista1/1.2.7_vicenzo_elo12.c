#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5;
    int b = 10;
    int c = a + b;

    a = 20;
    b = 30;

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}