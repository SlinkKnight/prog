#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str[6] = "cimol";
    char senha[6];

    system("cls");
    printf("Informe a senha >> ");

    for(int i = 0; i < 5; i++) {
        senha[i] = getch();
        printf("*");
    }

    if(!strcmp(str, senha)) {
        printf("\nSenha ok!");
    }
}