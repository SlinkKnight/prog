/** 
 * VICENZO STOPASSOLA
 * ELO12b 2025
 * 2/12/25
 * Controle de estoque
 * NÃO BOTEI TANTO RECURSO VISUAL POR CAUSA DO LINUX, NO VSCODE TBM N MOSTRA COR NO TERMINAL
 * **/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define LINHAS 10
#define COLUNAS 6

void clear() { //funcao importante para compatibilidade com o linuxxxx
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}


int main() {

    float a[LINHAS][COLUNAS]; //matriz e variaveis

    int jaRodou = 0, index, accClassB = 0, accClassN = 0, accClassC = 0;
    float maior = 0.0, menor = 99999999.9;
    int indiceMaior, indiceMenor;
    int i, j, tentativas = 0, tentativasMax = 3, menuState;
    int senha = 12345, senhaUser, User = 12345, userUser;
    char refrig, categ, classTexto;
    float accAdc = 0, accImp = 0;

    while(1){ //return 1 é mais facil de usar aqui, dai tem um loopzao infinto
        printf("Digite seu usuario >> ");
        scanf("%d", &userUser);
        printf("Digite sua senha >> ");
        scanf("%d", &senhaUser);
        if(senhaUser != senha || userUser != User) {
            tentativas++;
            if (tentativas == tentativasMax) { //em programas de vdd ele não avisa se o usuario ou a senha estão errados, fiz assim pq é mais facil e objetivamente melhor
                printf("NUMERO DE TENTATIVAS MAXIMAS ALCANCADO, FECHANDO PROGRAMA\n");
                return 1;
            } else {
                clear();
                printf("Senha ou usuario invalidos, tente novamente\n");
                system("color 4F");
                Sleep(1000);
                system("color 07");
                clear();
            }
        } else break;
    }
    clear();
    
    while (1){ //sla, achei legal botar um negocio que mostra a unica opcao do usuario antes de definir a matriz
        clear();
        if(!jaRodou) {
            printf("===============================\n");
            printf("        MENU PRINCIPAL\n");
            printf("===============================\n");
            printf("[1] - Cadastrar Produtos\n");
            printf("[2] - Informacoes da Empresa\n");
            printf("[0] - Sair\n");
            printf("===============================\n");
        } else {
            printf("===============================\n");
            printf("        MENU PRINCIPAL\n");
            printf("===============================\n");
            printf("[1] - Recadastrar Produtos\n");
            printf("[2] - Informacoes da Empresa\n");
            printf("[3] - Gerenciar Produtos\n");
            printf("[4] - Listar Produtos\n");
            printf("[5] - Relatorio\n");
            printf("[0] - Sair\n");
            printf("===============================\n");
        }

        printf("Selecione o menu a navegar >> ");
        scanf("%d", &menuState);

        switch (menuState){ //Switch case com os casos do menu
            case 1 : {
                clear(); //funcao definida antes
                jaRodou = 1;
                for(i = 0; i<LINHAS; i++) {

                    do {
                        clear();
                        printf("Digite o preco unitario do produto %d >> ", i + 1); //indice + 1 para pardonizar
                        scanf("%f", &a[i][0]);
                    } while (a[i][0] <= 0);

                    do {
                        clear();
                        printf("Defina se o produto %d precisa de refrigeracao [Ss]im [Nn]ao >> ", i + 1); //conversor basico char -> int pq não da pra usar struct, cagou o código todo
                        scanf(" %c", &refrig);
                        switch (refrig) {
                            case 'S': 
                            case 's':
                                a[i][1] = 1.0; break;
                            case 'N':
                            case 'n':
                                a[i][1] = 0.0; break;
                            default: {
                                a[i][1] = -1.0;
                                printf("codigo invalido\n"); //validacaozonha basica
                            }
                        }
                    } while (a[i][1] == -1.0);

                    do {
                        clear();
                        printf("Defina a categoria do produto %d [Ll]impeza [Aa]limentacao [Vv]estuario >> ", i + 1); //mais um conversor, ensina struct pqp
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
                                    printf("categoria invalida\n");
                            }
                    } while (a[i][2] == -1.0);
                    
                    if(a[i][0] <= 20.0) { //que porra é essa?? tambem não sei, mas encadeamento de operacional é genial, parece até que eu sou inteligente
                        a[i][3] = (a[i][2] == 1.0) ? 2.0 : (a[i][2] == 2.0) ? 3.0 : 4.0;
                    } else if(a[i][0] <= 50.0) {
                        a[i][3] = (a[i][1] == 1.0) ? 6.0 : 1.55;
                    } else {
                        a[i][3] = (a[i][1] == 1.0) ? 5.0 : 1.0;
                    }

                    a[i][4] = (a[i][2] == 2.0 && a[i][1] == 1.0) ? (a[i][0] * 0.04) : (a[i][2] == 1.0) ? (a[i][0] * 0.035) : (a[i][0] * 0.02); //sofri nessa de calcular imposto, me arrependo de n ter feito com if
                    a[i][5] = a[i][4] + a[i][0] + a[i][3];
                }
                break;
            }
            case 2 : { //CPF RETIRADO DE FONTES CONFIAVEIS
                clear();
                printf("=============================================\n");
                printf("              TIAGO COMPUTER\n");
                printf("=============================================\n");
                printf("Tiago Computer de Taquara\n");
                printf("Telefone: (51) 8276-0231\n");
                printf("CPF: 032.862.970-70\n");
                printf("=============================================\n");
                setbuf(stdin, NULL);
                fflush(stdin);
                getchar();
                break;
            }
            case 3 : { //mesma coisa que o cadastro mas pra produtos especificos, deveria ter usado a variavel I ao inves de ter criado uma nova. Perda de espaço na memória.
                do
                {
                    clear();
                    printf("Digite o produto a ser alterado >> ");
                    scanf("%d", &index);
                    index--;
                } while (index < 0 || index > LINHAS-1); //validação por do while no codigo todo, fica mais legal
                
                do {
                    clear();
                    printf("Digite o preco unitario do produto %d (Valor antigo: %.2f) >> ", index + 1, a[index][0]);
                    scanf("%f", &a[index][0]);
                } while (a[index][0] <= 0);

                do {
                    clear();
                    char refrigTexto = (a[index][1] == 1.0) ? 'S' : 'N';
                    printf("Defina se o produto %d precisa de refrigeracao [Ss]im [Nn]ao (Valor antigo: %c) >> ", index + 1, refrigTexto);
                    scanf(" %c", &refrig);
                    switch (refrig) {
                        case 'S': 
                        case 's':
                            a[index][1] = 1.0; break;
                        case 'N':
                        case 'n':
                            a[index][1] = 0.0; break;
                        default:
                            a[index][1] = -1.0;
                            printf("codigo invalido\n");
                    }
                } while (a[index][1] == -1.0);

                do {
                    clear();
                    char catTexto = (a[index][2] == 1.0) ? 'L' : (a[index][2] == 2.0) ? 'A' : 'V';
                    printf("Defina a categoria do produto %d [Ll]impeza [Aa]limentacao [Vv]estuario (Valor antigo: %c)>> ", index + 1, catTexto);
                    scanf(" %c", &categ);
                        switch (categ) {
                            case 'L': 
                            case 'l':
                                a[index][2] = 1.0; break;
                            case 'A': 
                            case 'a':
                                a[index][2] = 2.0; break;
                            case 'V': 
                            case 'v':
                                a[index][2] = 3.0; break;
                            default:
                                a[index][2] = -1.0;
                                printf("categoria invalida\n");
                        }
                } while (a[index][2] == -1.0);

                if(a[index][0] <= 20.0) { //DRI foi pro caralho, não deveria ter me repedito mas tudo bem, nem todo programador é perfeito. Se tivesse um dia extra eu deixava bonito
                    a[index][3] = (a[index][2] == 1.0) ? 3.0 : (a[index][2] == 2.0) ? 2.0 : 4.0;
                } else if(a[index][0] <= 50.0) {
                    a[index][3] = (a[index][1] == 1.0) ? 6.0 : 1.55;
                } else {
                    a[index][3] = (a[index][1] == 1.0) ? 5.0 : 1.0;
                }

                a[index][4] = (a[index][2] == 2.0 && a[index][1] == 1.0) ? (a[index][0] * 0.04) : (a[index][2] == 1.0) ? (a[index][0] * 0.035) : (a[index][0] * 0.02);
                a[index][5] = a[index][4] + a[index][0] + a[index][3];

                break;
            }
            case 4 : {

                clear();

                accClassB = 0;
                accClassC = 0;
                accClassN = 0;

                printf("===================================================================================\n");
                printf("| %-5s | %-10s | %-8s | %-5s | %-8s | %-8s | %-8s | %-5s |\n","COD", "PRECO", "REFRIG.", "CATEG.", "ESTOQ.", "IMPOSTO", "FINAL", "CLASS"); //essa linha foi o chatgpt que fez, mas é puramente estético.
                printf("===================================================================================\n");
                for(i = 0; i < LINHAS; i++) {
                    char catTexto = (a[i][2] == 1.0) ? 'L' : (a[i][2] == 2.0) ? 'A' : 'V';
                    char refrigTexto = (a[i][1] == 1.0) ? 'X' : ' ';
                    char classTexto = (a[i][5] <= 20.0) ? 'B' : (a[i][5] <= 100.0) ? 'N' : 'C';

                    printf("| %-5d | R$%-8.2f | %-8c | %-6c | R$%-6.2f | R$%-6.2f | R$%-6.2f | %-6c |\n", i+1, a[i][0], refrigTexto, catTexto, a[i][3], a[i][4], a[i][5], classTexto);
                }
                printf("===================================================================================\n");
                setbuf(stdin, NULL); //limpeza de buffer dupla pra OS
                fflush(stdin);
                getchar();
                break;
            }
            case 5 : {
                accAdc = 0;
                accImp = 0;
                maior = 0.0;
                menor = 99999999.9; //infinito, dava pra ter feito de outro jeito mas eu n lembrava
                accClassB = 0;
                accClassC = 0;
                accClassN = 0;

                for(i = 0; i < LINHAS; i++) {

                    accImp += a[i][4];
                    accAdc += a[i][4] + a[i][3];

                    if (a[i][5] > maior) {
                        maior = a[i][5];
                        indiceMaior = i;
                    }
                    if (a[i][5] < menor) {
                        menor = a[i][5];
                        indiceMenor = i;
                    }
                    if (a[i][5] <= 20.0) accClassB++;
                    else if (a[i][5] <= 100.0) accClassN++;
                    else accClassC++;
                }
                clear();
                printf("Media dos valores adicionais: %.2f\n", accAdc/LINHAS);
                printf("Produto com maior preco final: %d, pois tem preco de R$%.2f\n", indiceMaior + 1, maior);
                printf("Produto com menor preco final: %d, pois tem preco de R$%.2f\n", indiceMenor + 1, menor);
                printf("Total de imposto: %.2f\n", accImp);
                printf("Existem %d produtos classificados como barato, %d produtos classificados como normal, e %d produtos classificados como caro\n", accClassB, accClassN, accClassC);

                setbuf(stdin, NULL);
                fflush(stdin);
                getchar();
                break;
            }
            case 0 : {
                //kill
                printf("Saindo do programa\n");
                return 0;
            }
            default: {
                printf("Index de menu invalido\n");
                system("color 4F");
                Sleep(300);
                system("color 07");
                clear();
                //não testei esse pisca
            }
        }
    }
    return 0;
}