#include <stdio.h>
#include <stdlib.h>
#include <conio.h>/** Incluir arquivo externo de cabeçalho **/
/**Exemplo de funções para leitura de caracteres**/
int main()
{
    char caractere;
    printf("\n=== Operacao com scanf ===\n");
    printf("Informe um caractere: ");
    setbuf(stdin,NULL);
    scanf(" %c",&caractere);/*Espera o ENTER e tem echo da tela*/
    printf("Caractere informado pelo usuario: %c\n",caractere);

    printf("\n=== Operacao com getchar ===\n");
    printf("Informe um caractere: ");
    setbuf(stdin,NULL);
    caractere = getchar();/*Espera o ENTER e tem echo da tela*/
    printf("Caractere informado pelo usuario: %c\n",caractere);

    printf("\n=== Operacao com getch ===\n");
    printf("Informe um caractere: ");
    setbuf(stdin,NULL);
    caractere = getch();/*Não espera o ENTER e não tem echo da tela*/
    printf("\nCaractere informado pelo usuario: %c\n",caractere);
    
    printf("\n=== Operacao com getche ===\n");
    printf("Informe um caractere: ");
    setbuf(stdin,NULL);
    caractere = getche();/*Não espera o ENTER e tem echo da tela*/
    printf("\nCaractere informado pelo usuario: %c\n",caractere);
    return 0;
}