#include <stdio.h>
#include <stdlib.h>

int main() {

    int response;

    scanf("%i", &response);

    switch (response) {
        case 1 : printf("1"); break;
        case 2 : printf("2"); break;
        default : printf("0");
    }
    return 0;
}