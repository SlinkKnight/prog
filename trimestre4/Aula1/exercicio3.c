#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa(float num1, float num2);

int main() {
    float num1, num2;

    printf("Diga o cateto a >> ");
    scanf("%f", &num1);
    printf("Diga o cateto b >> ");
    scanf("%f", &num2);
    printf("%f",hipotenusa(num1, num2));
}

float hipotenusa(float num1, float num2) {
    return sqrt(pow(num1, 2.0)+pow(num2, 2.0));
}