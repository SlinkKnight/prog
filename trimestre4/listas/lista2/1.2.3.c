#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float tempoVoltain(void);
float melhorTempo(float arg1, float arg2, float arg3, float arg4, float arg5, int flag);
float piorTempo(float arg1, float arg2, float arg3, float arg4, float arg5);
float tempoMedio(float arg1, float arg2, float arg3, float arg4, float arg5);
float tempoTotal(float arg1, float arg2, float arg3, float arg4, float arg5);

int main() {
    float voltas[5] = {0.0}, last = 99999999, lastmenor = 0, arg1, arg2, arg3, arg4, arg5;
    int opc;

    while(1) {
        system("cls");
        printf("1 - informar o tempo da volta\n");
        printf("2 - retornar o melhor tempo\n");
        printf("3 - retornar o pior tempo\n");
        printf("4 - retornar a volta em que ocorreu o melhor tempo\n");
        printf("5 - retornar o tempo medio das voltas\n");
        printf("6 - retornar o tempo total\n");
        printf("7 - sair\n");

        printf(">> ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            system("cls");
            arg1 = tempoVoltain();
            arg2 = tempoVoltain();
            arg3 = tempoVoltain();
            arg4 = tempoVoltain();
            arg5 = tempoVoltain();
            break;
        case 2:
            system("cls");
            printf("O melhor tempo foi de: %.2f", melhorTempo(arg1, arg2, arg3, arg4, arg5, 1));
            setbuf(stdin, NULL);
            fflush(stdin);
            getchar();
            break;
        case 3:
            system("cls");
            printf("Pior tempo foi de %.2f", piorTempo(arg1, arg2, arg3, arg4, arg5));
            setbuf(stdin, NULL);
            fflush(stdin);
            getchar();
            break;
        case 4:
            system("cls");
            printf("A volta de melhor tempo = %d", (int)melhorTempo(arg1, arg2, arg3, arg4, arg5, 4));
            setbuf(stdin, NULL);
            fflush(stdin);
            getchar();
            break;
        case 5:
            system("cls");
            printf("Tempo medio foi de: %.2f", tempoMedio(arg1, arg2, arg3, arg4, arg5));
            setbuf(stdin, NULL);
            fflush(stdin);
            getchar();
            break;
        case 6:
            system("cls");
            printf("Tempo total foi de: %.2f", tempoTotal(arg1, arg2, arg3, arg4, arg5));
            setbuf(stdin, NULL);
            fflush(stdin);
            getchar();
            break;
        case 7:
            return 0;
        default:
            break;
        }
    }
}

float tempoVoltain(void) {

    float volta;

    do {
        printf("Informe o tempo da volta >> ");
        scanf("%f", &volta);
    } while(volta <= 0.0);

    return volta;
}


float melhorTempo(float arg1, float arg2, float arg3, float arg4, float arg5, int flag) {

    float last = 99999999;
    int melhor = 1;

    if (arg1 < last) { last = arg1; melhor = 1; }
    if (arg2 < last) { last = arg2; melhor = 2; }
    if (arg3 < last) { last = arg3; melhor = 3; }
    if (arg4 < last) { last = arg4; melhor = 4; }
    if (arg5 < last) { last = arg5; melhor = 5; }

    if (flag == 4) {
        return (float)melhor;
    } else return last;
}

float piorTempo(float arg1, float arg2, float arg3, float arg4, float arg5) {

    float last = 0;

    if (arg1 > last) last = arg1;
    if (arg2 > last) last = arg2;
    if (arg3 > last) last = arg3;
    if (arg4 > last) last = arg4;
    if (arg5 > last) last = arg5;

    return last;

}

float tempoMedio(float arg1, float arg2, float arg3, float arg4, float arg5) {
    float acc = arg1 + arg2 + arg3 + arg4 + arg5;
    return acc/5;
}

float tempoTotal(float arg1, float arg2, float arg3, float arg4, float arg5) {
    float acc = arg1 + arg2 + arg3 + arg4 + arg5;
    return acc;
}