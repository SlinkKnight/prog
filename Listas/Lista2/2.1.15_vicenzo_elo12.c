#include <stdio.h>
#include <stdlib.h>

int main() {

    int prod1Produzido, prod1Vendido, prod2Produzido, prod2Vendido;
    int estoque1, estoque2;

    printf("Digite a quantidade produzida e vendida de Produto 1 >> ");
    scanf("%d %d", &prod1Produzido, &prod1Vendido);

    printf("Digite a quantidade produzida e vendida de Produto 2 >> ");
    scanf("%d %d", &prod2Produzido, &prod2Vendido);

    estoque1 = prod1Produzido - prod1Vendido;
    estoque2 = prod2Produzido - prod2Vendido;

    printf("Produto 1 no estoque: %d\n", estoque1);
    if (estoque1 < 50) {
        printf("Produto 1 com menos de 50 unidades no estoque!\n");
    }

    printf("Produto 2 no estoque: %d\n", estoque2);
    if (estoque2 < 50) {
        printf("Produto 2 com menos de 50 unidades no estoque!\n");
    }
    return 0;
}
