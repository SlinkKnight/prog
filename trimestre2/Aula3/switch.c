#include <stdio.h>
#include <stdlib.h>

int main() {

    char genero;

    printf("Digite seu genero (M ou F) >> ");
    setbuf(stdin, NULL);
    scanf("%c", &genero);

    switch (genero) {
        case 'M': 
        case 'm': printf("Feminino");
        case 'F':
        case 'f': printf("Masculino");
    }
    return 0;
}