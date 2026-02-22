#include <stdlib.h>
#include <stdio.h>

int main() {

    float r;

    while (1) {
        do{
            printf("Digite o raio >> ");
            scanf("%f", &r);
        } while(r <= 0);

        printf("Resultado foi %f\n", r*r*3.14159);
    }
    return 0;
}