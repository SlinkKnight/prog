#include <stdio.h>
#include <stdlib.h>

int main() {
    float raio, altura, volume, PI = 3.14159;

    printf("Digite o raio e a altura da lata de tinta >> ");
    scanf("%f %f", &raio, &altura);

    volume = PI * raio * raio * altura;

    printf("Volume da lata é de: %.2f\n", volume);
    return 0;
}
