#include <stdio.h>
#include <stdlib.h>
#define LINHAS 5
#define COLUNAS 3

int main() {
    float mesas[LINHAS][COLUNAS] = {0}, maior = 0, menor = 99999999, medida;
    int i, j, index;
    char inst;

    while (1) {
        printf("Digite o codigo de instrução >> ");
        scanf(" %c", &inst);

        switch (inst) {
        case 'A':
            for(i = 0; i < LINHAS; i++) {
                do { printf("Selecione a medicão de altura da mesa %i >> ", i+1);
                    scanf("%f", &mesas[i][0]); } while (mesas[i][0] <= 0);
                do { printf("Selecione a medicão de profundidade da mesa %i >> ", i+1);
                    scanf("%f", &mesas[i][1]); } while (mesas[i][1] <= 0);
                do { printf("Selecione a medicão de comprimento da mesa %i >> ", i+1);
                    scanf("%f", &mesas[i][2]); } while (mesas[i][2] <= 0);
            }
            break;
        case 'B':
            do { printf("Selecione um index para alterar as medidas [0-%i] >> ", LINHAS-1);
            scanf("%i", &index); } while (index < 0 || index >= LINHAS);
            do { printf("Selecione a medicão de altura da mesa %i >> ", index + 1);
            scanf("%f", &mesas[index][0]); } while (mesas[index][0] <= 0);
            do { printf("Selecione a medicão de profundidade da mesa %i >> ", index + 1);
            scanf("%f", &mesas[index][1]); } while (mesas[index][1] <= 0);
            do { printf("Selecione a medicão de comprimento da mesa %i >> ", index + 1);
            scanf("%f", &mesas[index][2]); } while (mesas[index][2] <= 0);
            break;
        case 'C':
            do { printf("Selecione um index para consultar [0-%i] >> ", LINHAS-1);
            scanf("%i", &index); } while (index < 0 || index >= LINHAS);
            printf("A mesa %i tem as medições %.3f X %.3f X %.3f\n", index, mesas[index][0], mesas[index][1], mesas[index][2]);
            break;
        case 'D':
            do { printf("Selecione uma medida para modificar [0-1-2] >> ");
            scanf("%i", &index); } while (index < 0 || index > 2);
            for(i = 0; i < LINHAS; i++) {
                do { printf("Selecione um novo valor para a mesa %i >> ", i+1);
                scanf("%f", &medida); } while (medida <= 0);
                mesas[i][index] = medida;
            }
            break;
        case 'E':
            do { printf("Selecione uma medida para consultar [0-1-2] >> ");
            scanf("%i", &index); } while (index < 0 || index > 2);
            for(i = 0; i < LINHAS; i++) {
                if(mesas[i][index] > maior) maior = mesas[i][index];
                if(mesas[i][index] < menor) menor = mesas[i][index];
            }
            printf("A maior medida = %.3f\n", maior);
            printf("A menor medida = %.3f\n", menor);
            maior = 0;
            menor = 99999999;

            break;
        case 'F':
            for(i = 0; i < LINHAS; i++) {
                for(j = 0; j < COLUNAS; j++) {
                    printf("%.0f  ", mesas[i][j]);
                }
                printf("\n");
            }
            break;
        case 'S':
            return 0;
        default:
            printf("Codigo de instrução inválido\n");
            break;
        }
    }
    return 0;
}
