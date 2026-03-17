#include <stdio.h>
#include <stdlib.h>
#include "../include/vogal.h"

int main() {
    char car;
    int resp;

    printf("Digite a letra a analisar >> ");
    scanf(" %c", &car);
    resp = analisar(car);
    if (resp) {
        printf("Vogal!!! \n");
    } else printf("Consoante!!! \n");

}
