#include <stdio.h>
#include <stdlib.h>

int main() {

    char response, genero;

    printf("Digite o estado civil (C: casado, S: solteiro, V: viuvo, D: divorciado) >> ");
    setbuf(stdin, NULL);
    scanf("%c", &response);
    printf("Digite seu genero (M ou F) >> ");
    setbuf(stdin, NULL);
    scanf("%c", &genero);

    switch (genero) {
        case 'M': 
        switch (response) {
            case 'C': printf("Estado civil informado: Casado"); break;
            case 'S': printf("Estado civil informado: Solteiro"); break;
            case 'V': printf("Estado civil informado: Viuvo"); break;
            case 'D': printf("Estado civil informado: Divorciado"); break;

            default : printf("valor invalido\n");
        }
        case 'F':
        switch (response) {
            case 'C': printf("Estado civil informado: Casado"); break;
            case 'S': printf("Estado civil informado: Solteiro"); break;
            case 'V': printf("Estado civil informado: Viuvo"); break;
            case 'D': printf("Estado civil informado: Divorciado"); break;

            default : printf("valor invalido\n");
        }
    }
    return 0;
}