#include <stdlib.h>
#include <stdio.h>

int main() {

    int valor1;

    printf("Insira seu salario >> ");
    scanf("%d", &valor1);

    if(valor1 <= 10000) {
        valor1 += 1000; 
    }
    
    printf("seu salario é de %d\n", valor1);

    return 0;
}
