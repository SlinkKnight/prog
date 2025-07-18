#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    
    int andar = 0;
    int andarDesejado;
    
    printf("\033[H\033[J");
    printf("Andar atual %i\n", andar);

   for ( ; ; )
   {
    printf("Digite o andar desejado (0-5) >> ");
    scanf("%i", &andarDesejado);
    printf("\033[H\033[J");

        if (andar != andarDesejado) {
            if (andarDesejado < 6 && andarDesejado > -1) {
                if (andarDesejado < andar) {
                    for (andar; andarDesejado <= andar; andar--) {
                        printf("Elevador descendo\n");
                        printf("%i\n", andar);
                        sleep(1);
                        printf("\033[H\033[J");
                    }
                } else {                    
                    for (andar; andarDesejado >= andar; andar++) {
                        printf("Elevador subindo\n");
                        printf("%i\n", andar);
                        sleep(1);
                        printf("\033[H\033[J");
                    }
                }
                andar = andarDesejado;
                printf("Voce chegou ao andar %i\n", andarDesejado);

            } else printf("Andar inválido\n");
        } else printf("Voce ja se encontra no andar certo\n");
    }
    return 0;
}