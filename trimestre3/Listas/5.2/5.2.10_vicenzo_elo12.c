#include <stdio.h>
#include <stdlib.h>
#define LINHAS 3
#define COLUNAS 4

int main() {
    float a[LINHAS][COLUNAS];
    int i, j;
    float media = 0;

    for(i = 0; i < LINHAS; i++) {
        printf("Digite o numero do aluno %i (XXX): ", i + 1);
        scanf("%f", &a[i][0]);

        printf("Digite a média das provas do aluno %03.f >> ", a[i][0]);
        scanf("%f", &a[i][1]);

        printf("Digite a média dos trabalhos do aluno %03.f >> ", a[i][0]);
        scanf("%f", &a[i][2]);

        a[i][3] = a[i][1] + a[i][2];
    }

    for(i = 0; i < LINHAS; i++) {
        printf("Nota final do aluno %03.f = %2.f\n", a[i][0], a[i][3]);
        media += a[i][3];
    }

    printf("Média geral  = %.2f\n", media / LINHAS);

    return 0;
}
