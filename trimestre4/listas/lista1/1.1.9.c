#include <stdlib.h>
#include <stdio.h>

int main() {

    float n, n1;
    while (1) {
        printf("Digite numero um >> ");
        scanf("%f", &n);
        printf("Digite numero dois >> ");
        scanf("%f", &n1);

        if(n > 0.0 && n1 > 0.0) {
            if(n < 1.0 && n1 < 1.0) printf("Valores validos\n");
            else printf("Valores invalidos\n");
        } else printf("Valores invalidos\n");
    }
    return 0;
}