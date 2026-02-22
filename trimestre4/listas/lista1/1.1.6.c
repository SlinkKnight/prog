#include <stdlib.h>
#include <stdio.h>

int main() {

    int n1, n2;
    while (1) {
        printf("Digite numero um >> ");
        scanf("%d", &n1);
        printf("Digite numero dois >> ");
        scanf("%d", &n2);

        printf("%d == %d = %d\n", n1, n2, (n1 == n2) ? 1:0);
        printf("%d != %d = %d\n", n1, n2, (n1 != n2) ? 1:0);
        printf("%d < %d = %d\n", n1, n2, (n1 < n2) ? 1:0);
        printf("%d > %d = %d\n", n1, n2, (n1 > n2) ? 1:0);
    }
    return 0;
}