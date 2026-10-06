#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void ext(char *str, char caract) {

    int acc = 0;

    char *inicio = str;

    while(*str) {

        *str = tolower(*str);

        if(*str == caract) {
            *str = toupper(*str);
            acc++;
        }
        str++;
    }

    printf("quantidade = %d\n", acc);
    printf("string: %s\n", inicio);
}


int main() {

    char str[31], caract;

    while(1) {
        printf("Digite a string >> ");
        setbuf(stdin, NULL);
        scanf("%30[^\n]", str);

        printf("Digite o caractere >> ");
        scanf(" %c", &caract);

        ext(str, caract);
    }
}