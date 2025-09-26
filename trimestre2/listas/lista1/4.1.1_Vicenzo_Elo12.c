#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int numero;

    printf("digite um numero >> ");
    scanf("%d", &numero);

    for (int i = 0; i < 10; i++) {
        system("clear");
        printf("%d\n", numero);
        sleep(1);
    }
    
    return 0;
}
