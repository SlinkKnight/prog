#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

    float capital, juros, tempoAplicacao, montante;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite sua capital >> ");
    scanf("%f", &capital);
    printf("Digite os juros em porcentagem >> ");
    scanf("%f", &juros);
    printf("Digite seu tempo da aplicação em meses >> ");
    scanf("%f", &tempoAplicacao);

    if (capital >= 100 && tempoAplicacao >= 5) {
        
        montante = capital * pow(1 + (juros/100), tempoAplicacao);
        printf("Seu montante é de %.2f\n", montante);

    } else printf("Autorização de Investimento: Negado\n"); 

    return 0;
}