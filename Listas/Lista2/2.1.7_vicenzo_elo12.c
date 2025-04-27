#include <stdio.h>
#include <stdlib.h>

int main() {

    float num1, num2, media;
    scanf("%f %f", &num1, &num2);

    media = (num1 + num2) / 2;

    if (media >= 6)
        printf("Aprovado, sua média foi igual a: %.2f\n", media);
    else
        printf("Reprovado, sua média foi igual a: %.2f\n", media);

    return 0;
}
