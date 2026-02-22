#include <stdlib.h>
#include <stdio.h>

int main() {
    float r[3] = {0, 0, 0}, req = 0, v = 0;
    int i;

    while (1) {

        while (v <= 0.0) {
            printf("Valor de tensao da fonte >> ");
            scanf("%f", &v);
        }

        for(i = 0; i = 3; i++){
            while(r[i] <= 0.0) {
                printf("Valor do resisor %d >> ", i);
                scanf("%f", &r[i]);
            }
            req += r[i];
        }
        printf("req eh: %f, I eh: %f\n", v/req);
        printf("potencia eh: %f\n", v/req * v);
    }
    return 0;
}