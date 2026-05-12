#include <math.h>
#include <stdio.h>

char classifica(float tensao, float temp, float carga) {
    if (tensao < 10.0 && temp > 60.0) {
        return 'F';
    } else if(carga > 20.0) {
        return 'S';
    } else if(temp > 40.0) {
        return 'T';
    } else if(tensao < 11.8 && carga > 10.0) {
        return 'D';
    } else if(tensao >= 11.8 && tensao <= 13.8 && temp >= 15.0 && temp <= 40.0) {
        return 'N';
    } else printf("morreu ja");
}

void diagnostico(char cod) {
    switch (cod){
    case 'N': printf("Normal, nenhuma acao recomendada\n"); break;
    case 'S': printf("Sobrecarga, reduzir corrente imediatamente\n"); break;
    case 'T': printf("Sobretemperatura, acionar ventilacao forcada\n"); break;
    case 'D': printf("Subdimensionada, verificar capacidade do banco de baterias\n"); break;
    case 'F': printf("Falha critica, desligar e isolar imediatamente\n"); break;
    default: break;
    }
}
void potencia(float tensao, float corrente) {
    printf("A potencia eh de %.2fW\n", tensao * corrente);
    if(potencia < 0) printf("Descarregando");
    else printf("Carregando");
}
