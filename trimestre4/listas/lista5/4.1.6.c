#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char nomes[5][31];
    int opc, indice;

    for(int i = 0; i < 5; i++) {
        printf("Diga o nome %d >> ", i + 1);
        setbuf(stdin,NULL);
        scanf(" %[^\n]", nomes[i]);
    }

    while (1) {
        system("cls");

        printf("1 - Mostrar todos os nomes\n");
        printf("2 - Buscar nome por indice\n");
        printf("0 - Sair\n");
        printf("Digite sua opcao >> ");
        scanf("%d", &opc);

        switch (opc)
        {
        case 2:
            printf("Digite o indice 0-4 >> ");
            scanf("%d", &indice);

            printf("O indice eh: %s", nomes[indice]);
            setbuf(stdin, NULL);
            getchar();

            break; 
        case 1:
            for(int i = 0; i < 5; i++) {
                printf("%s\n", nomes[i]);
            }
            setbuf(stdin, NULL);
            getchar();
            break;
        default:
            return 0;
            break;
        }
    }
    


    system("cls");
}