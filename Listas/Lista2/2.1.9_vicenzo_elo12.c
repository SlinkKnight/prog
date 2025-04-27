#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;

    printf("Digite tres numeros >> ");
    scanf("%d %d %d", &a, &b, &c);

    if (a < b && a < c) {
        if (b < c)
            printf("Ordem crescente: %d %d %d\n", a, b, c);
        else
            printf("Ordem crescente: %d %d %d\n", a, c, b);
    } else if (b < a && b < c) {
        if (a < c)
            printf("Ordem crescente: %d %d %d\n", b, a, c);
        else
            printf("Ordem crescente: %d %d %d\n", b, c, a);
    } else { // c é o menor
        if (a < b)
            printf("Ordem crescente: %d %d %d\n", c, a, b);
        else
            printf("Ordem crescente: %d %d %d\n", c, b, a);
    }

    return 0;
}
