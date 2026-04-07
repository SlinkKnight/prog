#include <stdio.h>
#include <stdlib.h>
int main()
{
    /** Exemplo de Vetores do tipo char e Strings **/
    int i;

    /**Exemplo de declarações de strings sem carga inicial **/
    char nomeUsuarioString[16];

    char strBufferTeclado[16];
    /** Exemplo de declaração e carga inicial de vetor do tipo char **/

    char nomeEscolaVetor[10] = {'C','i','m','o','l',' ','1','7','7','8'};
    /** Exemplos de declarações e cargas iniciais de vetores do tipo char no formato string **/

    char nomeEscolaString1[11] = {'C','i','m','o','l',' ','1','7','7','8','\0'};/*Carga inicial caractere a
    caractere*/

    char nomeEscolaString2[11] = "Cimol 1778";/*Carga inicial já no formato string*/

    /** Impressão caractere a caractere de um vetor do tipo char **/
    printf("nomeEscolaVetor caractere a caractere: ");

    for(i=0;i<10;i++) printf("%c",nomeEscolaVetor[i]);

    /** Impressão caractere a caractere de uma string **/
    printf("\nnomeEscolaString1 caractere a caractere: ");

    for(i=0;i<11;i++) printf("%c",nomeEscolaString1[i]);

    /** Impressões de strings **/
    printf("\n\nstring nomeEscolaString1: %s",nomeEscolaString1);
    printf("\nstring nomeEscolaString2: %s",nomeEscolaString2);

    /** Leitura de uma string com scanf sem scanset **/
    printf("\n\nInforme um nome composto e observe o erro na leitura: ");
    fflush(stdin);
    scanf("%s",nomeUsuarioString);
    printf("Informe outra string (note que ocorre um erro de leitura): ");
    scanf("%s",strBufferTeclado);
    printf("Nome composto informado (scanf sem scanset): %s\n",nomeUsuarioString);
    printf("Conteudo de strBufferTeclado: %s",strBufferTeclado);

    /** Leitura de uma string com scanf com scanset **/
    printf("\n\nInforme um nome composto e observe que agora NAO ha erro na leitura: ");
    fflush(stdin);
    scanf("%15[^\n]",nomeUsuarioString);
    printf("Nome composto informado (scanf com scanset): %s",nomeUsuarioString);
    printf("\nInforme outra string (note que NAO ocorre um erro de leitura): ");
    fflush(stdin);
    scanf("%s",strBufferTeclado);
    printf("Conteudo de strBufferTeclado: %s",strBufferTeclado);
    
    return 0;
}