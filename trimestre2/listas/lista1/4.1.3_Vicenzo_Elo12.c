#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    for (int i = 153; i <= 300; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
