#include <stdio.h>
#include <stdlib.h>
int main()
{
    /** Exemplo scanf com scanset **/
    char palavra[11];/* Vetor suportará no máximo 10 caracteres informados pelo usuário
    mais o '\0' */
    printf("Informe uma palavra: ");
    setbuf(stdin,NULL);
    scanf("%10[^\n]",palavra);/* scanf com scanset para aceitar strings com espaços em
    branco e controle da
    quantidade de caracteres armazenados na string */
    printf("Palavra informada pelo usuario: %s",palavra);
    return 0;
}