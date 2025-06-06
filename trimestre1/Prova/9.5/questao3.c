#include <stdlib.h>
#include <stdio.h>

int main() {

    int salario, cargo;
    float bonus, reajuste;
    char turno;

    printf("Digite o código do cargo >> ");
    scanf("%i", &cargo);
    printf("Digite o turno do serviço >> ");
    setbuf(stdin, NULL);
    scanf("%c", &turno);
    printf("Digite seu salário atual >> ");
    scanf("%i", &salario);


    if (cargo >= 1 && cargo <= 3) {
        if (salario > 0) {
            if (turno == 'M' || turno == 'N' || turno == 'T'){

                bonus = (turno == 'N')? 100.00F : 50.30F; 

                if (cargo == 1) {
                    reajuste = salario * 1.45;
                } else if (cargo == 2) {
                    reajuste = salario * 1.2;
                } else reajuste = salario;
                
                printf("Seu salário reajustado é de: %.2f\n", bonus + reajuste);

            } else printf("Seu turno é inválido\n");
        } else printf("O salário é invalido\n");
    } else printf("Seu código de cargo está incorreto\n");

    return 0;
}