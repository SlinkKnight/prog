#include <stdio.h>
#include <stdlib.h>
#include "../include/hip.h"

int main() {
    float num1, num2;

    printf("Diga o cateto a >> ");
    scanf("%f", &num1);
    printf("Diga o cateto b >> ");
    scanf("%f", &num2);
    printf("%f",hipotenusa(num1, num2));
}
