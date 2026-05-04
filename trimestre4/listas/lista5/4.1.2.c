#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char str[2][11];
    char strFinal[22];

    while(1) {
        system("cls");
        printf("Digite a sting A >> ");
        scanf("%s",str[0]);

        system("cls");
        printf("Digite a sting B >> ");
        scanf(" %s",str[1]);

        system("cls");
        strcpy(strFinal, str[0]);
        strcat(strFinal, str[1]);

        printf("String contatenuada = %s", strFinal);

        setbuf(stdin, NULL);
        getchar();
    }
}