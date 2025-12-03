/** 
 * VICENZO STOPASSOLA
 * ELO12b 2025
 * 2/12/25
 * Controle de estoque
 * **/

#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>

#define LINHAS 10
#define COLUNAS 3

int main() {

    //float a[LINHAS][COLUNAS];
    float a[10][3] = {
    {10.50, 1, 2},   // preço, refrig, categ
    { 5.20, 0, 1},
    {33.00, 1, 3},
    {12.90, 0, 1},
    { 7.80, 0, 2},
    {99.99, 1, 3},
    { 1.50, 0, 2},
    { 3.40, 0, 1},
    {45.00, 1, 3},
    { 2.60, 0, 1}};
    int i, j, tentativas = 0, tentativasMax = 3, menuState;
    int senha = 12345, senhaUser, User = 12345, userUser;
    char refrig, categ;

    while(1){
        printf("Digite seu usuario >> ");
        scanf("%d", &userUser);
        printf("Digite sua senha >> ");
        scanf("%d", &senhaUser);
        if(senhaUser != senha || userUser != User) {
            tentativas++;
            if (tentativas == tentativasMax) {
                printf("NUMERO DE TENTATIVAS MAXIMAS ALCANCADO, FECHANDO PROGRAMA");
                return 1;
            } else {
                printf("Senha ou usuario invalidos, tente novamente\n");
                //system("color 4F");
                //Sleep(300);
                //system("color 07");
                //system("cls");
            }
        } else break;
    }
    //system("cls");
    
    while (1){
        printf("===============================\n");
        printf("        MENU PRINCIPAL\n");
        printf("===============================\n");
        printf("[1] - Cadastrar Produtos\n");
        printf("[2] - Gerenciar Produtos\n");
        printf("[3] - Listar Produtos\n");
        printf("[4] - Relatorios\n");
        printf("[5] - Informacoes da Empresa\n");
        printf("[0] - Sair\n");
        printf("===============================\n");

        printf("Selecione o menu a navegar >> ");
        scanf("%d", &menuState);

        switch (menuState){
            case 1 :
                for(i = 0; i<LINHAS; i++) {

                    do {
                        printf("Digite o preco unitario do produto %d >> ", i + 1);
                        scanf("%f", &a[i][0]);
                        //system("cls");
                    } while (a[i][0] <= 0);

                    do {
                        printf("Defina se o produto %d precisa de refrigeracao [Ss]im [Nn]ao >> ", i + 1);
                        scanf(" %c", &refrig);
                        switch (refrig) {
                            case 'S': 
                            case 's':
                                a[i][1] = 1.0; break;
                            case 'N':
                            case 'n':
                                a[i][1] = 0.0; break;
                            default:
                                a[i][1] = -1.0;
                                printf("codigo invalido\n");
                        }
                        //system("cls");
                    } while (a[i][1] == -1.0);

                    do {
                        printf("Defina a categoria do produto %d [Ll]impeza [Aa]limentacao [Vv]estuario >> ", i + 1);
                        scanf(" %c", &categ);
                            switch (categ) {
                                case 'L': 
                                case 'l':
                                    a[i][2] = 1.0; break;
                                case 'A': 
                                case 'a':
                                    a[i][2] = 2.0; break;
                                case 'V': 
                                case 'v':
                                    a[i][2] = 3.0; break;
                                default:
                                    a[i][2] = -1.0;
                                    printf("Categoria inválida! Use L, A ou V.\n");
                            }
                    } while (a[i][2] == -1.0);
                }
                break;
            case 2 :
                printf("2");
                break;
            case 3 :
                printf("3");
                break;
            case 4 :
                printf("4");
                break;
            case 5 :
                printf("=============================================\n");
                printf("              TIAGO COMPUTER\n");
                printf("      Sistema de Cadastro de Produtos\n");
                printf("=============================================\n");
                printf("Empresa: Tiago Computer de Taquara\n");
                printf("Telefone: (51) 8276-0231\n");
                printf("CPF: 032.862.970-70\n");
                printf("---------------------------------------------\n");
                printf("\n");
                break;
            case 0 : {
                printf("Saindo do programa\n");
                return 0;
            }
            default: {
                printf("Index de menu invalido\n");
                //system("color 4F");
                //Sleep(300);
                //system("color 07");
                //system("cls");
            }
        }
    }
    

    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            printf("%.0f  ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}