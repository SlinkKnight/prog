#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int valor1;
    int valor2;
    float resultadoSoma;
    float resultadoSub;
    float resultadoMult;
    float resultadoDiv;


    setlocale(LC_ALL, "Portuguese");
    printf("Escreva aqui o primeiro valor >> ");
    scanf("%d", &valor1);
    printf("Escreva aqui o segundo valor >> ");
    scanf("%d", &valor2);
    resultadoSoma = valor1 + valor2;
    resultadoSub = valor1 - valor2;
    resultadoMult = valor1 * valor2;
    resultadoDiv = valor1 / (float)valor2;

    printf("O resultado da soma foi %.2f\n", resultadoSoma);
    printf("O resultado da subtração foi %.2f\n", resultadoSub);
    printf("O resultado da multiplicação foi %.2f\n", resultadoMult);
    printf("O resultado da divisão foi %.2f\n", resultadoDiv);
    return 0;
}
