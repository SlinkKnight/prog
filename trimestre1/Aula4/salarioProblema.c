#include <stdlib.h>
#include <stdio.h>

int main() {

    float valor1;

    printf("Insira seu salario >> ");
    scanf("%f", &valor1);

    if(valor1 <= 10000.0) {
        valor1 += 1000.0; 
    }
    
    printf("seu salario é de %.2f\n", valor1);
    return 0;
}
