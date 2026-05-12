#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../include/bateria.h"

int main() {
    char cod;
    float tensao, corrente, temp;

    do {
    printf("Digite a tensao >> ");
    scanf("%f", &tensao);
    } while(tensao < 0.0 || tensao > 20.0);
    do {
    printf("Digite a corrente >> ");
    scanf("%f", &corrente);
    } while(corrente < -50.0 || corrente > 50.0);
    do {
    printf("Digite a temp >> ");
    scanf("%f", &temp);
    } while(temp < -20.0 || temp > 80.0);

    cod = classifica(tensao, temp, corrente);

    diagnostico(cod);

    potencia(tensao, corrente);

    return 0;
}