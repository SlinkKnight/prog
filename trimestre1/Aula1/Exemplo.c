#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int idade;
    float altura;

    setlocale(LC_ALL, "Portuguese");
    printf("Escreva aqui sua idade >> ");
    scanf("%d", &idade);
    printf("Escreva aqui sua altura >> ");
    scanf("%f", &altura);
    
    printf("sua altura é de %.2f metros e sua idade é de %d anos\n", altura, idade);
    return 0;
}
