#include <stdio.h>
#include <stdlib.h>

int seq(int max); //prototipo avisa pro compilador que tem coisa dps do main

void linha(void) { //função é void pq não retorna nada
    printf("-----------");

}

int main() {
    linha();
    seq(5);
    linha();
    int i = seq(10);
    printf(i);
}

int seq(int max) { 
    int i;
    for(i=1; i<max; i++);
        printf("%d\n", i);
    return i;
}