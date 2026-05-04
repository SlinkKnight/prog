#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    char str[100];
    char cript = '*';

    system("cls");
    printf("Informe a frase >> ");

    setbuf(stdin,NULL);
    scanf(" %[^\n]",str);

    system("cls");
    printf("Informe o caractere >> ");
    scanf(" %c", &cript);

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            str[i] = cript;
        }
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = cript;
        } 
    }

    printf("%s", str);
}