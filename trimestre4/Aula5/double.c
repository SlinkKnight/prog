#include <stdio.h>
#include <stdlib.h>

int main()
    {
    double pi = 3.1415926535;
    double n1 = 1.5435e-8;
    float n2 = 9E3;
    double n3;
    double n4;
    /*
    Formato do tipo double (para printf ou scanf): %lf
    Formato de notação científica (apenas para o printf): %e ou %E
    Formato de notação científica (apenas para o scanf): %le ou %lE
    */
    printf("Pi: %.9lf\n",pi);
    printf("n1 normal: %lf\n",n1);
    printf("n1 em notacao sci.: %e\n",n1);
    printf("n2 normal: %lf\n",n2);
    printf("n2 em notacao sci.: %e\n",n2);
    printf("Informe n3 em notacao cientifica: ");
    scanf("%le",&n3);
    printf("n3: %E ou %e",n3,n3);
    return 0;
    }