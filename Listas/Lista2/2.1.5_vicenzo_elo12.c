#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num;

    printf("digite um numero >> ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d, positivo\n", num);
    } else if (num < 0) {
        printf("%d, negativo\n", num);
    } else
        printf("%d, nulo\n", num);

    return 0;
}
