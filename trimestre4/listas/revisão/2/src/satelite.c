#include <math.h>
#include <stdio.h>
#define PI 3.1415926535

double erroAngular(float angulo) {
    double rad = angulo * PI / 180.0;
    return fabs(sin(rad) - cos(rad));
}

double indiceEstabilidade(float erro, float desvio, float coeficiente) {
    return ((desvio * erro) + sqrt(log10(pow(desvio+1, 2.5)))) / (coeficiente + 0.01);
}

void classificarEstabilidade(float estabilidade) {
    if(estabilidade < 10) {
        printf("Alinhamento otimo\n");
    } else if(estabilidade < 50) {
        printf("Alinhamento parcial\n");
    } else printf("Alinhamento insatisfatorio\n");
}