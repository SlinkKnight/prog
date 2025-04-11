#include <stdlib.h>
#include <stdio.h>

int main() {

    float temp;

    printf("Insira a temperatura do sensor >> ");
    scanf("%f", &temp);

    if(temp > 0) {
        if(temp <= 10) {
            printf("Temperatura ok\n");
        } else if(temp <= 15 && temp != 12.5) {
            printf("Ventilador em velocidade 1\n");
        } else if(temp > 15){
            printf("Ventilador em velocidade 2\n");
        }
    } else printf("Temperatura abaixo do limite\n");
    
    return 0;
}