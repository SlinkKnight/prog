#include <stdio.h>
#include <stdlib.h>
#include "../include/montante.h"

int main() {
    float capital, tempo, taxa;

    while (1) {
        system("cls");
        do
        {
            printf("Digite a capital [R$] >> ");
            scanf("%f", &capital);
        } while (capital < 0);
        do
        {
            printf("Digite a taxa ao mes [%%] >> ");
            scanf("%f", &taxa);
        } while (taxa < 0);
        do
        {
            printf("Digite o tempo [meses] >> ");
            scanf("%f", &tempo);
        } while (tempo < 0);

        if(capital < 100.0 && tempo < 5) {
            printf("Investimento negado");
            return 1;
        }
    
        printf("O montante eh de: %.2fR$", montante(capital, taxa, tempo));
        setbuf(stdin, NULL);
        fflush(stdin);
        getchar();
    }
}
