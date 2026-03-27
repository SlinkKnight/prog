#include <stdio.h>
#include <stdlib.h>
#include "../include/funcaoCensura.h"

void main() {

    int i, n;
    
    while (1) {

        system("cls");
        printf("Decida o seu numero >> ");
        scanf("%i", &n);

        for(i = 0; i < n; i++) {
            imprimeAsterisco(i);
        }
        setbuf(stdin, NULL);
        fflush(stdin);
        getchar();
    }
}
