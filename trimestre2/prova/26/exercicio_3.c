#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int i, flag = 0, rota = 0;
    float custofinal = 0, distancia, distanciafinal = 0.00, precopr, precoind, distInternacional = 0.00, distInterestadual = 0.00, distIntermunicipal = 0.00;

    for(i=0; i<5; i++) {


        printf("Selecione a rota desejada >> ");
        scanf("%i", &rota);

        switch (rota) {
            case 1:
                flag = 2;
                precopr = 31.00;
                break;
            case 2:
                flag = 0;
                precopr = 15.80;
                break;
            case 3:
                flag = 3;
                precopr = 12.55;
                break;
            default:
                i--;
                flag = 1;
                printf("Rota não encontrada\n");
                break;
        }
        printf("\033[H\033[J");
        if(flag == 0 ) {

            do {
                printf("Digite a distancia em KM >> ");
                scanf("%f", &distancia);
                printf("\033[H\033[J");

                
                if (distancia > 0.00) {
                    precoind = distancia * precopr;
                    custofinal = custofinal + precoind;
                    distanciafinal = distanciafinal + distancia;
                    distInterestadual = distInterestadual + distancia;

                } else printf("Distancia invalida\n");
            } while (distancia <=0); 
            
        } else if(flag == 2) {
            

            do {
                printf("Digite a distancia em milhas >> ");
                scanf("%f", &distancia);
                printf("\033[H\033[J");

                
                if (distancia > 0.00) {
                    precoind = distancia * precopr;
                    custofinal = custofinal + precoind;
                    distanciafinal = distanciafinal + distancia * 1.609344;
                    distInternacional = distInternacional + distancia;

                } else printf("Distancia invalida\n");
            } while (distancia <=0);

        } else if(flag ==  3) {


            do {
            printf("Digite a distancia em KM >> ");
            scanf("%f", &distancia);
            printf("\033[H\033[J");


            
            if (distancia > 0.00) {
                precoind = distancia * precopr;
                custofinal = custofinal + precoind;
                distanciafinal = distanciafinal + distancia;
                distIntermunicipal = distIntermunicipal + distancia;

            } else printf("Distancia invalida\n");
            } while (distancia <=0);
        }
    }

    printf("Distancia na rota internacional = %.2f\n, Distancia na rota interestadual = %.2f\n, Distancia na rota intermunicipal = %.2f\n", distInternacional * 1.609344, distInterestadual, distIntermunicipal);
    printf("Distancia final = %.2f\n", distanciafinal);
    printf("Custo final = %.2f\n", custofinal);

    return 0;
}

