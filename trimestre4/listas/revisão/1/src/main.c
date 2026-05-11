#include <stdio.h>
#include <stdlib.h>
#include "../include/cotar.h"
#include "../include/dimen.h"
#include <ctype.h>
#include <string.h>

int main() {
    char nome[16];
    char tipo[11];
    float raio, altura, largura, area, preco, taxa, desconto;
    float valorBruto, descontoCalc, subtotal, imposto, liquido;

    printf("Digite seu nome >> ");
    setbuf(stdin,NULL);
    scanf("%15[^\n]",nome);

    for(int i = 0; i < 15; i++) {
        nome[i] = toupper(nome[i]);
    }

    printf("Digite o tipo de painel [Circular] [Retangular] >> ");
    scanf(" %10s", tipo);

    if(!strcmp(tipo, "Circular")) {
        do {
        printf("Digite o raio >> ");
        scanf("%f", &raio);
        } while (raio <= 0);

        area = dimenCirc(raio);

    } else if(!strcmp(tipo, "Retangular")) {

        do {
            printf("Digite a altura >> ");
            scanf("%f", &altura);
        } while (altura <= 0.0);

        do {
        printf("Digite a largura >> ");
        scanf("%f", &largura);
        } while (largura <= 0.0);

        area = dimenRet(largura, altura);

    } else return 1;

    if(area <= 10.0) desconto = 0;
    else if(area <= 20.0) desconto = 0.05; 
    else desconto = 0.1;

    do {
        printf("Informe o preco por m^2 >> ");
        scanf("%f", &preco);
    } while (preco <= 0.0);

    do {
        printf("Informe a taxa em porcentagem >> ");
        scanf("%f", &taxa);
    } while (taxa < 0.0);

    valorBruto = quote(area, preco);
    descontoCalc = desc(valorBruto, desconto);
    subtotal = sub(valorBruto, descontoCalc);
    imposto = imp(subtotal, taxa);
    liquido = liq(subtotal, imposto);

    printf("Nome: %s", nome);
    printf("Tipo: %s", tipo);
    printf("O projeto tem %.2fM^s", area);
    printf("Valor bruto eh de: R$%.2f\n", valorBruto);
    printf("O valor do desconto eh de: R$%.2f\n", descontoCalc);
    printf("O subtotal eh de: R$%.2f\n", subtotal);
    printf("O imposto eh de: R$%.2f\n", imposto);
    printf("Total liquido eh de: R$%.2f", liquido);
}