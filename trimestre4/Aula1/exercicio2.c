#include <stdio.h>
#include <stdlib.h>

void paridade(int num);

int main() {
    paridade(4);
}

void paridade(int num) {
    if(num % 2 == 0)
        printf("eh par\n");
    else printf("impar");
}