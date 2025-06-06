#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <locale.h>

int main() {

    char codigo;
    float volumeAtual, reaba, projecao, volume;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite seu codigo >> ");
    scanf("%c", &codigo);

    if (codigo == 'P' || codigo == 'p' || codigo == 'S' || codigo == 's' || codigo == 'R' || codigo == 'r') {

        printf("Digite o volume atual >> ");
        scanf("%f", &volumeAtual);

        if (volumeAtual > 0.0) {

            printf("Digite a taxa de reabastecimento em %% >> ");
            scanf("%f", &reaba); 
            
            if (reaba > 0.0) {

                printf("Digite o periodo em meses >> ");
                scanf("%f", &projecao);

                if (projecao > 0.0) {

                    volume = volumeAtual * pow(1 + reaba/100, projecao);
                    printf("O volume projetado é de: %.2f\n", volume);
                    
                    if(codigo == 'p' || codigo == 'P' && volume < 420.0) {
                        printf("Alerta de escassez hidrica! Necessario racionamento imediato\n");
                    } else if (codigo == 'p' || codigo == 'P' && volume > 800.0){
                        printf("Risco de transbordamento! Necessario abrir comportas\n");
                    } else if (codigo == 'S' || codigo == 's' && volume < 1350.0){
                        printf("Alerta de escassez hidrica! Necessario racionamento imediato\n");
                    } else if (codigo == 'S' || codigo == 's' && volume > 4200.0){
                        printf("Risco de transbordamento! Necessario abrir comportas\n");
                    } else if (codigo == 'R' || codigo == 'r' && volume < 250.0 ){
                        printf("Alerta de escassez hidrica! Necessario racionamento imediato\n");
                    } else if (codigo == 'R' || codigo == 'r' && volume > 450.0){
                        printf("Risco de transbordamento! Necessario abrir comportas\n");
                    } else printf("Reservatorios com volumes controlados. Situacao estavel.\n");
                }
            } else printf("taxa de reabastecimento invalida\n");
        } else printf("Volume invalido\n");
    } else printf("Codigo invalido\n");

    return 0;
}