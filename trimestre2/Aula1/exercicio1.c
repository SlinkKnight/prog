#include <stdio.h>
#include <stdlib.h>

int main() {

    int response;

    printf("Digite o numero inteiro >> ");
    setbuf(stdin, NULL);
    scanf("%i", &response);

    switch (response) {
        case 1 :  
        case 2 : 
        case 3 : 
        case 4 : 
        case 5 : printf("valor valido\n"); break;

        default : printf("valor invalido\n");
    }
    return 0;
}