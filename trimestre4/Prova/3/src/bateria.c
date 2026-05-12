#include <math.h>
#include <stdio.h>

char classifica(float tensao, float temp, float carga) {
    if (tensao < 10.0 && temp > 60.0) {
        return 'F';
    } else if(tensao < 11.8 && carga > 10.0) {
        return 'D';
    } else if(temp > 40.0) {
        return 'T';
    } else if(carga > 20.0) {
        return 'S';
    } else if(tensao >= 11.8 && tensao <= 13.8 && temp >= 15.0 && temp <= 40.0) {
        return 'N';
    } else printf("morreu ja");
}

void diagnostico(char cod) {
    switch (cod){
    case 'N': printf("Normal, nenhuma acao recomendada"); break;
    case 'S': printf("Sobrecarga, reduzir corrente imediatamente"); break;
    case 'T': printf("Sobretemperatura, acionar ventilacao forcada"); break;
    case 'D': printf("Subdimensionada, verificar capacidade do banco de baterias"); break;
    case 'F': printf("Falha critica, desligar e isolar imediatamente"); break;
    default: break;
    }
}
void potencia(float tensao, float corrente) {

}
