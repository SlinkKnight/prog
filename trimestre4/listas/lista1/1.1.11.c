#include <stdlib.h>
#include <stdio.h>

int main() {

    int a, b, c;

    while (1) {
        do{
            printf("Digite o lado a >> ");
            scanf("%f", &a);
        } while(a <= 0);

        do{
            printf("Digite o lado b >> ");
            scanf("%f", &b);
        } while(b <= 0);

        do{
            printf("Digite o lado c >> ");
            scanf("%f", &c);
        } while(c <= 0);

        if(a == b && b == c) printf("EQUILATERO!!\n");
        else if(a == b || a == c || b == c) printf("ISOSCELES!!\n");
        else printf("ESCALENO");
    }
    return 0;
}