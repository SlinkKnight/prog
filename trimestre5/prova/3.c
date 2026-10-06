#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void menu(float *vetor, char controle) {

    int i = 0;
    int acc = 0;
    float acctemp = 0;

    if (controle == 'D') {
        do
        {
            printf("Qual indice deseja ir? ");
            scanf("%d", &i);
        } while (i < 1 || i > 5);

        printf("A temperatura informada eh de: %.2f\n", *(vetor + i - 1));
    } else if (controle == 'C')
    {
        for (i = 0; i < 5; i++) {
            if(*vetor > -3.0 && *vetor < 10.5) {
                acc++;
            }
            vetor++;
        }
        printf("Existem %d temperaturas na janela\n", acc);
    } else {
        for (i = 0; i < 5; i++) {
            acctemp += *vetor;
            vetor++;
        }
        printf("A media eh de %.2f\n", acctemp/5);
    }
    
}


int main() {

    float vetor[5];
    int flagfoi = 0;
    char controle;
    int i;

    while (1) {
        if(flagfoi) {

            printf("[A] informar temp\n");
            printf("[B] media aritmetica\n");
            printf("[C] consultar janela temp\n");
            printf("[D] consultar individual\n");
            printf("[E] sair\n");

            scanf(" %c", &controle);

            switch (controle)
            {
            case 'a':
            case 'A':
                for (i = 0; i < 5; i++) {
                    printf("Digite o valor %d >> ", i);
                    scanf("%f", &vetor[i]);
                }
                break;
            case 'b':
            case 'B':
                menu(vetor, 'B');
                break;
            case 'c':
            case 'C':
                menu(vetor, 'C');
                break;
            case 'd':
            case 'D':
                menu(vetor, 'D');
                break;
            case 'e':
            case 'E':
                return 0;
                break;
            
            default:
                printf("Erro, caractere nao encontrado");
                break;
            }
        } else {
            printf("[A] informar temp\n");
            printf("[B] sair\n");

            scanf(" %c", &controle);

            switch (controle)
            {
            case 'a':
            case 'A':
                for (i = 0; i < 5; i++) {
                    printf("Digite o valor %d >> ", i);
                    scanf("%f", &vetor[i]);
                }
                break;
            case 'b':
            case 'B':
                return 0;
                break;
            
            default:
                printf("Erro, caractere nao encontrado");
                break;
            }

            flagfoi = 1;
        }
    }
}