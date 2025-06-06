#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, maiorValor;

    printf("Digite os números >>");
    scanf("%d %d", &num1, &num2);

    maiorValor = (num1 > num2)? num1 : num2;

    printf("O maior número é: %d\n", maiorValor);
    return 0;
}

