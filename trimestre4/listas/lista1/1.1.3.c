#include <stdlib.h>
#include <stdio.h>

int main() {
    char simb;
    float n1, n2, res;
    int flag = 0;

    while(1) {
        printf("Selecione o float 1 >> ");
        scanf("%f", &n1);

        printf("Selecione o float 2 >> ");
        scanf("%f", &n2);

        printf("Escreva sua operacaoo (+, -, /, *) >> ");
        scanf(" %c", &simb);


        switch (simb){
        case '+':
            res = n1 + n2;
            break;
        case '-':
            res = n1 - n2;
            break;
        case '/':
            if(n2 != 0) {res = n1 / n2;}
            else {
                printf("Operacao nao permitida.\n");
                flag = 1;
            }
            break;
        case '*':
            res = n1 * n2;
            break;
        default:
            printf("Nenhuma operacao selecionada.\n");
            break;
        }
        if(!flag) printf("O resultado e: %.2f\n", res);

    }
    return 0;
}

