#include <stdio.h>
#include <stdlib.h>

void menu(void);

int main() {
    menu();
}

void menu(void) {
    printf("=== Menu de opcoes ===\n");
    printf("\t[1] para adicao\n");
    printf("\t[2] para subtracao\n");
    printf("\t[3] para sair\n");
}