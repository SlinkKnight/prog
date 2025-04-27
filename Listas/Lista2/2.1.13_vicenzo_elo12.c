#include <stdio.h>
#include <stdlib.h>

int main() {
    int codigo;

    printf("Insira seu código >> ");
    scanf("%d", &codigo);

    if (codigo == 1) 
        printf("Sul\n");
    else if (codigo == 2) 
        printf("Sudeste\n");
    else if (codigo == 3 || codigo == 4)
        printf("Nordeste\n");
    else if (codigo == 5 || codigo == 6 || codigo == 9) 
        printf("Norte\n");
    else if (codigo >= 10 && codigo <= 15) 
        printf("Centro-oeste\n");
    else printf("Código inválido\n");

    return 0;
}
