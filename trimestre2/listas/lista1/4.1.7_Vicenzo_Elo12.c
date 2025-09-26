#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    
    int valor, i = 2, soma = 0;

    printf("digite um valor >> ");
    scanf("%d", &valor);

    while (i <= valor) {
        soma += i;
        i += 2;
    }

    printf("soma dos numeros pares ate %d = %d\n", valor, soma);

    return 0;
}
