/*
Exemplo Força Elétrica entre Cargas
Utilizando notação científica e função absoluto ou módulo
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double q1,q2,d,F,K;
    K = 9E9;
    
    printf("Informe a carga q1: ");
    scanf("%le",&q1);
    printf("Informe a carga q2: ");
    scanf("%le",&q2);
    printf("Informe a distancia: ");
    scanf("%le",&d);
    F = K*(fabs(q1*q2)/pow(d,2.0));
    printf("F: %e N",F);
    return 0;
}