#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, op = 0;

    while (i != 10) {

        printf("Digite se quer parar (0 ou 1) >> ");
        scanf("%d", &op);

        if (op == 1) {
            break;
        } else i++;
    }
    return 0;
}