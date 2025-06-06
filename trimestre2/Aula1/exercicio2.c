#include <stdio.h>
#include <stdlib.h>

int main() {

    char response;
    float a, b;

    printf("Digite o numero float a >> ");
    scanf("%f", &a);

    printf("Digite o numero float b >> ");
    scanf("%f", &b);

    printf("Digite a operação desejada, (+ ou -) >> ");
    setbuf(stdin, NULL);
    scanf("%c", &response);

    switch (response) {
        case '+' : 
            printf("O resultado é: %.2f\n", a + b); break;
        case '-' :  
            printf("O resultado é: %.2f\n", a - b); break;

        default : printf("operacao invalido\n");
    }
    return 0;
}