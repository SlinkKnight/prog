#include <stdio.h>
#include <stdlib.h>

int main() {

    char x = '\0';

    for(int dedos = 1; dedos <= 5; dedos++) {
        printf("dedos %i\n", dedos);
    }

    for (; ;) {
        printf("infinito");
        break;
    }
    return 0;
}