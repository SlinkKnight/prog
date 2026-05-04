#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];

    while(1) {
        system("cls");
        printf("Digite o nome >> ");
        scanf(" %s",nome);

        printf("%d",strlen(nome));

        setbuf(stdin, NULL);
        getchar();
    }
}