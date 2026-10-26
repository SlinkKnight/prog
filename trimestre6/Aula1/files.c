#include <stdio.h>

int main(void)
{
    FILE *pont_arq;

    pont_arq = fopen("vicenzo.txt", "w");

    if (pont_arq == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fclose(pont_arq);

    return 0;
}