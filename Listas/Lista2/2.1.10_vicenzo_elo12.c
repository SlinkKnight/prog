#include <stdio.h>
#include <stdlib.h>

int main() {

    int qtd;
    float preco;

    printf("Digite a quantidade de resistores >> ");
    scanf("%d", &qtd);

    if (qtd > 0) {
        if (qtd < 20) {
            preco = 1.30;
        } else
            preco = 1.00;

        printf("Preço total é de R$ %.2f\n", preco * qtd);
    } else printf("Quantidade inválida");

    return 0;
}
