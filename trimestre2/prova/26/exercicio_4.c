#include <stdio.h>
#include <stdlib.h>

int main() {

    int resistencia, maior = 0, ultima, umK = 0, quinhentosesessenta = 0, qtd = 0;

    do {
        printf("Determine a resistencia {negativo para sair} >> ");
        scanf("%i", &resistencia);
        printf("\033[H\033[J");

        if(resistencia > 0) {
            if (resistencia < 560) {
                qtd++;
                if (resistencia > ultima && resistencia > maior) maior = resistencia;
                ultima = resistencia;
                quinhentosesessenta++;
            } else if (resistencia == 1000) {
                qtd++;
                if (resistencia > ultima && resistencia > maior) maior = resistencia;
                ultima = resistencia;
                umK++;
            } else {
                qtd++;
                if (resistencia > ultima && resistencia > maior) maior = resistencia;
                ultima = resistencia;
            }

        } else printf("Valor de resistencia invalido\n");

    } while (resistencia >= 0);

    printf("quantidade de resistores = %i", qtd);
    printf("maior reistencia lida = %i\n", maior);
    printf("resistores iguais a 1 KR = %i\n", umK);
    printf("resistores menores que 560R = %i\n", quinhentosesessenta);

    return 0;

}


