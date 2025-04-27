#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;

    printf("Digite o numero >> ");
    scanf("%d", &num);

    if (num > 1 && num < 7){
        printf("Valor Válido\n");
    } else
        printf("Valor Inválido\n");

    return 0;
}
