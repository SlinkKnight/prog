#include <stdio.h>
#include <stdlib.h>

int main() {

    float raio, area, PI = 3.14159;

    printf("Digite o raio do circulo >> ");
    scanf("%f", &raio);

    area = PI * raio * raio;
    printf("Area = %.2f\n", area);

    return 0;
}