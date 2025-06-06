#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char codigo;
    int tempo, populacao, populacaoFinal;
    float tarifa, consumo, preco, fatura;

    printf("Digite o código da cidade >> ");
    scanf("%c", &codigo);

    if (codigo == 'a' || codigo == 'A' || codigo == 'b' || codigo == 'B' | codigo == 'c' || codigo == 'C') {
        
        printf("Digite o tempo >>");
        scanf("%i", &tempo);

        if (tempo > 0) {

            printf("Digite a população >> ");
            scanf("%i", &populacao);

            if (populacao > 0) {

                populacaoFinal = populacao * pow((1 + 0,15 * populacao), tempo);

                printf("Digite o consumo >> ");
                scanf("%f", &consumo);

                if (consumo >= 0) {

                    if (codigo == 'a' || codigo == 'A') {
                        tarifa = 15.00;
                        preco  = 2.62;
                    } else if (codigo == 'b' || codigo == 'B') {
                        tarifa = 18.50;
                        preco  = 3.10;
                    } else {
                        tarifa = 17.25;
                        preco = 3.43;
                    }
        
                    fatura = tarifa + consumo * preco;

                    printf("a fatura é igual à: %.2f\n", fatura);
                    printf("a população é igual a: %i\n", populacao);
                    printf("O valor por habitante é igual a: %.2f\n", fatura * populacao);

                    if (populacaoFinal >= 500000)
                        printf("Situação do sistema: Ampliação necessaria\n");
                    else 
                        printf("Situação do sistema: Capacidade adequada\n");
                } else printf("Consumo invalido\n");
            } else printf("população inválida\n");
        } else printf("Tempo nao invalido\n");
    } else printf("Codigo nao reconhecido\n");

    return 0;
}