#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float reais, acc;
    int flag, qtd = 0;

    do {
        printf("Digite o valor acumulado no mes >> ");
        scanf("%f", &reais);
        acc = acc + reais;
        qtd++;
        if (acc >= 2500) flag = 1;
        if (reais < 0.00) {
            flag = 1;
            acc = acc - reais;
            qtd--;
        } 

    } while (flag == 0);

    printf("media dos valores = %f em %i meses", acc/(float)qtd, qtd);

    return 0;

}