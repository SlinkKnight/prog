#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, p = 0, i = 0;

    printf("digite o numero >>");
    scanf("%d", &num);

    if (num % 2 == 0) {
        p = num;
    } else
        i = num;

    printf("Par: %d\n", p);
    printf("Ímpar: %d\n", i);

    return 0;
}
