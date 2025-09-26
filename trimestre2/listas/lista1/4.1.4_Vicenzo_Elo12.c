#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int numero, dentro = 0, fora = 0;

    for (int i = 0; i < 10; i++) {
        printf("digite o valor %d >> ", i+1);
        scanf("%d", &numero);

        if (numero >= 10 && numero <= 20) {
            dentro++;
        } else fora++;
    }

    printf("dentro do intervalo: %d\n", dentro);
    printf("fora do intervalo: %d\n", fora);
    
    return 0;
}
