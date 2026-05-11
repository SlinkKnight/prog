#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "satelite.h"

int main() {

    char id[4];
    double inclinacao, desvio, erro;
    float coeficiente;

    do {
        printf("Digite os dados do satélite [<id><ângulo><desvio><coeficiente>] >> ");
        scanf( "%3s %lf %lf %lf", id, &inclinacao, &desvio, &coeficiente);
    } while(inclinacao < 0.0 || desvio < 0.0 || coeficiente < 0.0 || coeficiente > 1.0);

    erro = erroAngular(inclinacao);

    printf("O erro angular eh de: %.10f\n", erro);
    printf("O indice de estabilidade eh de: %.10f\n", indiceEstabilidade(erro, desvio, coeficiente));
    classificarEstabilidade(indiceEstabilidade(erro, desvio, coeficiente));
}