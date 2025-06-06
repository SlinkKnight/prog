#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <locale.h>

int main() {

    int plano;
    float final, inicial, desconto;
    char periodo;

    printf("Digite seu periodo >> ");
    scanf("%c", &periodo);

    if (periodo == 'M' || periodo == 'S' || periodo == 'A') {

        printf("Digite seu plano >> ");
        scanf("%i", &plano);  

        if (plano == 1 || plano == 2 || plano == 3) {

            printf("Digite valor inicial >> ");
            scanf("%f", &inicial);

            if (inicial > 0) {

                desconto = (periodo == 'M' || periodo == 'S')? 5.5F:15.0F;

                if (plano == 1) {
                    final = inicial - inicial * (desconto / 100) + (inicial * 0.05);
                } else if (plano == 2) {
                    final = inicial - inicial * (desconto / 100) + (inicial * 0.085);
                } else {
                    final = inicial - inicial * (desconto / 100) + (inicial * 0.12);
                }

                printf("Valor final do plano: %.2f\n", final);

            } else printf("Valor invalido\n");
        } else printf("acesso invalido\n");
    } else printf("periodo invalido\n");

    return 0;
}