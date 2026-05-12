#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

    char opcao[12], string[31], stringDeco[31], stringCodi[31];
    int deslocamento;

    do {
        printf("[CODIFICAR] realiza a codificacao com deslocamento n\n");
        printf("[DECODIFICAR] realiza a decodificacao com deslocamento n\n");
        printf("[SAIR] sai do programa\n");
        printf("Decida qual opcao >> ");

        scanf(" %12[^\n]", opcao);

        for(int i = 0; i < 11; i++) {
            opcao[i] = toupper(opcao[i]);
        }
    } while (strcmp("SAIR", opcao) && strcmp("CODIFICAR", opcao) && strcmp("DECODIFICAR", opcao));



    if(!strcmp("CODIFICAR", opcao)) {
        do {
            printf("informe o deslocamento >> ");
            scanf("%d", &deslocamento);
        } while (deslocamento < 1 && deslocamento > 10);
        

        printf("Digite a string >> ");
        scanf(" %30[^\n]", string);

        for(int tamanho = 0; tamanho < strlen(string); tamanho++) {
            string[tamanho] = string[tamanho] + deslocamento;
        }

        for(int tempo = 0; tempo < strlen(string); tempo++) {
            printf("%c", string[tempo]);
        }


    } else if(!strcmp("DECODIFICAR", opcao)) {

        do {
            printf("informe o deslocamento >> ");
            scanf("%d", &deslocamento);
        } while (deslocamento < 1 && deslocamento > 10);

        printf("Digite a string >> ");
        scanf(" %30[^\n]", string);

        for(int tamanho = 0; tamanho < strlen(string); tamanho++) {
            string[tamanho] = string[tamanho] - deslocamento;
        }

        for(int tempo = 0; tempo < strlen(string) - 1; tempo++) {
            printf("%c", string[tempo]);
        }

    } else return 0;



}