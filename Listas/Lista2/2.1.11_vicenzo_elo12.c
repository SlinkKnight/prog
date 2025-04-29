#include <stdio.h>
#include <stdlib.h>

int main() {

    float salario, vendas, comissao;

    printf("Digite o salario e o valor de vendas >> ");
    scanf("%f %f", &salario, &vendas);

    if (salario > 0 && vendas > 0) {
        if (vendas <= 1500)
            comissao = vendas * 0.03;
        else
            comissao = 1500 * 0.03 + (vendas - 1500) * 0.05; //porra sor, isso foi genial

        printf("seu salário total é de R$ %.2f\n", salario + comissao);
    } else printf("Salário ou valor de vendas inválido");
    
    return 0;
}
