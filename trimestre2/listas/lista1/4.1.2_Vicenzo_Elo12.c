#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    for (int i = 10; i >= 1; i--) {
        printf("%d", i);
        getchar();
    }
    
    return 0;
}
