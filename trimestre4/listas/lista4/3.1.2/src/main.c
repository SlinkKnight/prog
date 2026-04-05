#include <stdio.h>
#include <stdlib.h>
#include "../include/senoide.h"

int main() {

    float vetSenoide[100], freq;

    while(1) {
        do
        {
            system("cls");
            printf("Digite aqui sua frequencia >> ");
            scanf("%f", &freq);
        } while (freq < 0);

        for(int j=0; j<100; j++) {
            vetSenoide[j] = senoide(freq, j);
            printf("%f\n", vetSenoide[j]);
        }

        setbuf(stdin, NULL);
        getchar();
    }
}
