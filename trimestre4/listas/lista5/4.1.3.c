#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[6] = "cimol";
    int i;

    for(i = 0; i < 6; i++) {
        str[i] = toupper(str[i]);
    }

    printf("%s", str);
}