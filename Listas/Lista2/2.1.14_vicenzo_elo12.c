#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float a, b, c, delta, x1, x2;

    printf("Digite respectivamente os valores de a, b, c >> ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Não é equação do 2 grau.\n");
        return 0;
    }

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        printf("Não existem raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz única: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes: %.2f e %.2f\n", x1, x2);
    }

    return 0;
}
