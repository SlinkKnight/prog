#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /** Exemplo Função Cosseno cos() **/
    double angulo;
    double arcoRadiano;
    double cosseno;
    /** const modifica a variável para constante, logo, garantimos que o seu valor não poderá ser alterado **/
    const double pi = 3.1415926535;

    printf("Informe o valor do angulo para calculo do cos: ");
    scanf("%lf",&angulo);
    arcoRadiano = (pi*angulo)/180.0;/** Conversão de graus para radianos **/
    cosseno = cos(arcoRadiano);
    printf("Valor de cosseno: %lf",cosseno);
        return 0;
}