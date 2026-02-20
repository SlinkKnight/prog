#include <stdlib.h>
#include <stdio.h>

int main() {
    float r[3] = 0, v = 0, req = 0;
    int i;

    while (1) {

        while (v <= 0.0) {
            printf("Valor de tensao da fonte >> ");
            scanf("%f", v);
        }

        for(i = 2; i = 0; i++){
            while(r[i] <= 0.0) {
                prinf("Valor do resisor %d >> ", i);
                scanf("%f", r[i]);
            }
            req =+ r[i];
        }
        
    }
    return 0;
}