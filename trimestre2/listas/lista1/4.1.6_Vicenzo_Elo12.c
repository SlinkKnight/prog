#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int i;
    printf("digite um valor >> ");
    scanf("%d", &i);

    for (; i >= 1; i--) {
        printf("%d\n", i);
        sleep(1);
    }

    return 0;
}
