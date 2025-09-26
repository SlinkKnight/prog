#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int i, fim;
    char opcao;

    printf("primeiro numero >> ");
    scanf("%d", &i);
    printf("ultimo numero >> ");
    scanf("%d", &fim);

    while (i <= fim) {
        printf("%d\n", i);
        i++;
        printf("pressione Ss para encerrar o programa >> ");
        scanf(" %c", &opcao);
        if (opcao == 's' || opcao == 'S') break;
    }

    return 0;
}
