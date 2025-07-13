#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int andar = 0;
    int andarDesejado;
    printf("Andar atual %i\n", andar);

   for ( ; ; )
   {
    printf("Digite o andar desejado (0-6) >> ");
    scanf("%i", &andarDesejado);
        if (andar != andarDesejado) {
            if (andarDesejado < 6 && andarDesejado > -1) {
                if (andarDesejado < andar) {
                    printf("Elevador descendo\n");
                    for (andar; andarDesejado <= andar; andar--) {
                        printf("%i\n", andar);
                        sleep(1);
                    }
                } else {                    
                    printf("Elevador subindo\n");
                    for (andar; andarDesejado >= andar; andar++) {
                        printf("%i\n", andar);
                        sleep(1);
                    }
                }
                andar = andarDesejado;
                printf("Voce chegou ao andar %i\n", andarDesejado);
            } else printf("Andar inválido\n");
        } else printf("Voce ja se encontra no andar certo\n");
    }
    return 0;
}